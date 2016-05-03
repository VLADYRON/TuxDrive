#!/usr/bin/env python2

from __future__ import division, print_function, unicode_literals, absolute_import
from pydrive.auth import GoogleAuth
from pydrive.drive import GoogleDrive
from gi.repository import Gtk, GLib
import os
import re

builder = Gtk.Builder()
builder.add_from_file("ui.xml")
window = builder.get_object("win")
window.show_all()
window.connect("destroy", Gtk.main_quit)
button = builder.get_object("uploadButton")

#create GoogleDrive directory - OS AGNOSTIC
drive_dir = os.getenv("HOME") + "/GoogleDrive"

try:
    os.makedirs(drive_dir)
except:
    pass

#autenticate with OAuth 2
gauth = GoogleAuth()
gauth.LocalWebserverAuth()

#list all files in the cloud storage
drive = GoogleDrive(gauth)

cont = 0

def main():
    
    DownloadAllFiles() 

def DownloadAllFiles():
    cont = 0
    file_list = ListFile()
    for file1 in file_list:
        if re.match("^application/vnd.", file1['mimeType']):
            continue    
        else:
            cont += 1
            file_id = file1['id']
            file_name = file1['title']
            downloaded_file = drive.CreateFile({'id': file_id})
            downloaded_file.ChunkedDownloadFile(file_id, drive_dir)
            print("File Name:", file1['title'])
            print("MimeType:", file1['mimeType'])
            print("File size:", file1['fileSize'])
            print()
    print("File downloaded:", cont)

def UploadAllFiles():
    cont = 0
    file_list = ListFile()
    for file1 in file_list:
        if re.match("^application/vnd.", file1['mimeType']):
            continue
        else:
            cont +=1
            file_id = file1['id']
            file_name = file1['title']
            uploaded_file = drive.CreateFile({'id': file_id})
            uploaded_file.Upload()
            print("File Name:", file1['title'])
            print("MimeType:", file1['mimeType'])
            print("File size:", file1['fileSize'])
            print()
    print("File uploaded:", cont)
    
def ListFiles():
    file_list = drive.ListFile({'q': "'root' in parents and trashed = false"}).GetList().execute()
    return file_list
    
    

#window.set_default_size(800, 600)
button.connect("clicked", UploadAllFiles)
Gtk.main()

if __name__ == '__main__':                                                   
    main()   
