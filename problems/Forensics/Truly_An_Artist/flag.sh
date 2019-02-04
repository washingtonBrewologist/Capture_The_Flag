#!bin/bash

identify -verbose 2018.png | grep -Eo "picoCTF{.*}"
