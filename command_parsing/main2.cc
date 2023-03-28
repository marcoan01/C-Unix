/*
 *Filename: main2.cc
 *Date: 02/15/2021
 *Author: Marco Delgado
 *email: mad190003@utdallas.edu
 *Course: CS3377.0W6 Spring 2021
 *Version: 1.0
 *Copyright 2021, All rights reserved
 *Description:  This is the main function. It will create the TCLAP objects. Add them to the CMD object. Call the processing and mapping functions
 */
#include "myheader2.h"

using namespace std;


int main(int argc, char** argv)
{

  TCLAP::CmdLine cmd("CS3377 Assignment 3", ' ', "1.0");
  TCLAP::ValueArg<std::string> outfileArg("o", "outfile", "The name of the output file", false, "output.txt", "output filename");
  TCLAP::SwitchArg upperSwitch("u", "upper", "Convert text to uppercase.", cmd, false);
  TCLAP::SwitchArg lowerSwitch("l", "lower", "Convert text to lowercase", cmd, false);
  TCLAP::UnlabeledValueArg<std::string> infileArg("infile", "The input filename", true, "infile.txt", "input filename", false);
  cmd.add(outfileArg);
  cmd.add(infileArg);
  cmd.parse(argc, argv);
  std::string in = infileArg.getValue();
  std::string out = outfileArg.getValue();
  processing(in, out);
  mapping(in, out);

  return 0;
}


