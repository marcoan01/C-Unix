/*
 *Filename: map.cc
 *Date: 02/15/2021
 *Author: Marco Delgado
 *Version: 1.0
 *Copyright 2021, All rights reserved
 *Description: This function will create a map object and an enum list. It will assign their values respectively and the map will be queried
 */

#include "myheader2.h"

using namespace std;


void mapping(string name3, string name4)
{
  enum data {LOWER, UPPER, OUT, IN};
  map<int, string> optionMap;
  optionMap[IN] = name3;
  optionMap[OUT] = name4;
  cout << "The input file name is: " << optionMap[IN] << endl;
  cout << "The output file name is: " << optionMap[OUT] << endl;

}
