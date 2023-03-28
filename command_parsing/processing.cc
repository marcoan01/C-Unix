/*
 *Filename: processing.cc
 *Date: 02/15/2021
 *Author: Marco Delgado
 *email: mad190003@utdallas.edu
 *Course: CS3377.OW6 Spring 2021
 *Version: 1.0
 *Copyright 2021, All rights reserved 
 *Description: This function will open the files required. transfer the data and then close them
 */
#include "myheader2.h"

using namespace std;

void processing(string name, string name2){

  std::string line;
  ifstream MyInput;
  std::ofstream ofs;
  MyInput.open(name.c_str(), ios::in);
  ofs.open(name2.c_str(), std::ofstream::out);
  if(MyInput.is_open())
    {
      std::getline(MyInput, line);
      ofs << line;
}
  MyInput.close();
  ofs.close();
}
