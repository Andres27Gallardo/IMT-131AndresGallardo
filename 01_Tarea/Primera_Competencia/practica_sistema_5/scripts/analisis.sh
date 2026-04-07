#!/bin/bash

cd ..
cd datos/
wc -l usuarios.txt
grep error accesos.log | wc -l
sort usuarios.txt
cat analisis.sh
 

