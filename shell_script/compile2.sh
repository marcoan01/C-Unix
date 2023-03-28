#!/bin/bash

#
# Filename compile2.sh
# Date 02/07/2021
# Author Marco Delgado
# Email mad190003@utdallas.edu
# Course CS 3377.OW6, spring 2021
# Version 1.0
# Copyright 2021, all rights reserved
# Description: Running myprogram with different amount of arguments 
#


echo "Running myprogram with 0 arguments " >> stdout.log
echo "Stdout and stderr appended to stdout.log and stderr.log respectively " >> stdout.log
./myprogram >> stdout.log
echo "Running myprogram with 2 arguments " >> stdout.log
echo "Stdout and stderr appended to stdout.log and stderr.log respectively " >> stdout.log
./myprogram abc >> stdout.log
echo "Running my program with 7 arguments " >> stdout.log 
echo "Stdout and stderr appended to stdout.log and stder.log respectively " >> stdout.log
./myprogram a b c d e f >> stdout.log
