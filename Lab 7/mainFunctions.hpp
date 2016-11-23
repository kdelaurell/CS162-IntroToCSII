/**************************************
 * Author: Kyle De Laurell
 * Date: 2/19/16
 * Description: main functions header file
 *************************************/

#ifndef mainFunctions_hpp
#define mainFunctions_hpp
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int menu(){
  int choice;
  cout << endl <<  "Please Select which program you would like to execute: " << endl;
  cout << "1. Search for target value" << endl;
  cout << "2. Sort Data File" << endl;
  cout << "3. Binary Search for target value" << endl;
  cout << "4. Exit Program" << endl;
  cin >> choice;

  while (choice < 1 || choice > 4){
    cout << "Error! Please enter a valid choice." << endl;
    cin >> choice;
  }

  return choice;
}



#endif
