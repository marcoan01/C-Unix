#!/bin/bash
#Filename: comp3.sh
#Date: 02/15/2021
#Author: Marco Delgado
#Copyright 2021, All rights reserved
#Description: This shell script will create an object called myprogram3 by including all the .cc files needed to run it 
#

g++ -I ~/include main2.cc processing.cc map.cc -o myprogram3
