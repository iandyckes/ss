#! /bin/bash

tag="V00-00-00"
direxample="output"

if [ ! -d $direxample ]; then
	echo "directory $direxample does not exist, creating link to /nfs-7/userdata/$USER/$direxample/$tag."
	mkdir -p /nfs-7/userdata/$USER/$direxample/$tag
	ln -s /nfs-7/userdata/$USER/$direxample/
else
	echo "directory $direxample already exists."		
fi

