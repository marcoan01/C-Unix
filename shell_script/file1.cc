/*
 *Filename: file1.cc
 *Date: 02/07/2021
 *Autor: Marco Delgado
 *Version 1.0
 *Copyright 2021, All rights reserved
 *Description:
           This main function will print the number of the arguments and their values
 */
#include <iostream>
#include "myheader.h"


using namespace std;


int main(int argc, char *argv[]) 
{

  cout << "The number of arguments is " << argc << endl;
  logmessage();
  for (int i = 0; i <= argc ; i++)
    {
    
      cout << argv[i] << endl;
}
return 0; 
}
