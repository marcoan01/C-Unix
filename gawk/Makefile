#Filename: Makefile
#Date: 03/12/2021
#Copyright 2021, all rights reserved
#Description: Makefile that will compile main4 and have the clean target to remove files and objects
#
main4: main4.o
	g++ -o  main4 main4.cc
main4.o: main4.cc
	g++ -c main4.cc

.PHONY: all clean 

clean:
	rm -f *.o *~
