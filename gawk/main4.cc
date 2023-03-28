/*
 *Filename: main4.cc
 *Date: 03/12/2021
 *Author: Marco Delgado
 *Version: 1.0
 *Copyright 2021, all rights reserved
 *Description: Main function that will run the gawk code and do the sum calculations
 */

#include <stdio.h>
#include <iostream>
#include <sstream>

using namespace std;


int main()
{
    int n1;
    int n2;
    int sum;
    char buff[2000];
    FILE *in;
    in = popen("./bin/gawk --version", "r");
    
    if(in == NULL)
    {
      cout << "Error creating stream " << endl;
      return -1;
      
    }
  
    while(fgets(buff, 2000, in))
    {
       cout << buff;
    }
    pclose(in);
    in = popen("./bin/gawk -f gawk.code numbers.txt", "r");
   
    if(in == NULL)
    {
      cout <<"Error creating stream " << endl;
      return -1;
    }
   
    while(fgets(buff, 2000, in) == NULL)
    {
      cout << "Error getting data " << endl;
      pclose(in);
      return -3;
    }
    istringstream istream(buff);
    istream >> n1 >> n2;
    cout << "The sum of column 1 is: " << n1 << endl;
    cout << "The sum of column 2 is: " << n2 << endl;
    sum = n1 + n2;
    cout << "The total sum is: " << sum << endl;
    return 0;
}
