#!/usr/bin/env python2

from __future__ import division, print_function, unicode_literals, absolute_import
from pydrive.auth import GoogleAuth
from pydrive.drive import GoogleDrive
from gi.repository import Gtk, GLib
import os
import re
import threading

builder = Gtk.Builder()
builder.add_from_file("ui.xml")
window = builder.get_object("win")
window.show_all()
window.connect("destroy", Gtk.main_quit)
upbutton = builder.get_object("uploadButton")

#create GoogleDrive directory - OS AGNOSTIC
drive_dir = os.getenv("HOME") + "/GoogleDrive"

try:
    os.makedirs(drive_dir)
except:
    pass

cont = 0

gauth = GoogleAuth()
gauth.LocalWebserverAuth()
drive = GoogleDrive(gauth)

def ListRemoteFiles():
    file_list = drive.ListFile({'q': "'root' in parents and trashed = false"}).GetList()
    return file_list

def ListLocalFiles():
    local_files = os.listdir(drive_dir)
    return local_files
    
def DownloadAllFiles():
    cont = 0
    file_list = ListRemoteFiles()
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

def UploadAllFiles(button):
    cont = 0
    file_list = ListLocalFiles()
    for file1 in file_list:
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

#window.set_default_size(800, 600)
upbutton.connect("clicked", UploadAllFiles)


if __name__ == '__main__':                                                   
    Gtk.main()   
