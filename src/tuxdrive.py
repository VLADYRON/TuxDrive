#!/usr/bin/env python2

from __future__ import division, print_function, unicode_literals, absolute_import
from pydrive.auth import GoogleAuth
from pydrive.drive import GoogleDrive
import os
import re

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

file_list = drive.ListFile({'q': "'root' in parents and trashed = false"}).GetList()
for file1 in file_list:
    if re.match("^application/vnd.", file1['mimeType']):
        continue
    file_id = file1['id']
    file_name = file1['title']
    #print(file_id)
    downloaded_file = drive.CreateFile({'id': file_id})
    downloaded_file.GetContentFile(drive_dir + "/" + file_name)
    #print("File Name:", file1['title'])
    #print("MimeType:", file1['mimeType'])
    #print()
    
    