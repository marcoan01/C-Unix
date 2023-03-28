#!/bin/bash
#
# Filename compile.sh
# Date 02/07/2021
# Author Marco Delgado
# Version 1.0 
# Copyright, 2021 all rights reserved 
# Description:  Linking file1 and file2 to get myprogram
#


echo "Compiling file1.cc  " >> stdout.log
echo "Compiling file2.cc  " >> stdout.log
echo "Linking them together " >> stdout.log
g++ file1.cc file2.cc -o myprogram

echo "Done " >> stdout.log
