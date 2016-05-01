from __future__ import print_function
import httplib2
import os

from apiclient import discovery
import oauth2client
from oauth2client import client
from oauth2client import tools

try:
    import argparse
    flags = argparse.ArgumentParser(parents=[tools.argparser]).parse_args()
except ImportError:
    flags = None
    
SCOPES = 'https://www.googleapis.com/auth/drive'                            #define the authorization level of the application (see Scopes in Google documentation)
CLIENT_SECRET_FILE = '../client_secret.json'                                #specify the path to the client json containing the client_id, client_secret and other informations for connecting to your Google API project
APPLICATION_NAME = 'TuxDrive'                                               #pretty self explanatory

def get_credentials():                                                      #function called when connecting for the first time to the Google servers
    home_dir = os.path.expanduser('~')                                      #setting the user's home directory
    credential_dir = os.path.join(home_dir, '.credential')                  #setting the hidden directory to store the credential file
    
    if not os.path.exists(credential_dir):                                  #create the credential directory if it doesn't exists 
        os.makedirs(credential_dir)
    credential_path = os.path.join(credential_dir, 'tuxdrive.json')         #create the json containing the user's credentials
    
    store = oauth2client.file.Storage(credential_path)                      
    credentials = store.get()
    if not credentials or credentials.invalid:                              #check if the credentials are already stored. 
        flow = client.flow_from_clientsecrets(CLIENT_SECRET_FILE, SCOPES)   #if not, or the credentials are invalid, it request new credentials for the needed API and scope
        flow.user_agent = APPLICATION_NAME                                  #else, it does not request new credentials but use instead the ones already available
        if flags:
            credentials = tools.run_flow(flow, store, flags)
        else:
            credentials = tools.run(flow, store)
        
        print('Storing credentials to ' + credential_path)
    return credentials                                                      #return the credential object
    
def main():                                                                 #program entry point
    credentials = get_credentials()                                         #create a new credential object
    http = credentials.authorize(httplib2.Http())                           #request an Http object based on the credentials
    service = discovery.build('drive', 'v3', http=http)                     #create a new Drive service object. Collections and methods calls will be done on this object. Don't forget to call the execute() method at some point, or 
                                                                            #the API call will not be made
    results = service.files().list(                         
        pageSize=10, fields="nextPageToken, files(id, name)").execute()     #calls the list method on the files collection, execute() to make the request
    items = results.get('files', [])                                        #create the array containing the result of the listing
    
    if not items:                                                           #just in case they forgot to actually use their Google Drive space, you know
        print('No file found')
    else:
        print('Files: ')
        for item in items:
            print('{0} ({1})'.format(item['name'], item['id']))
            
if __name__ == '__main__':                                                   
    main()