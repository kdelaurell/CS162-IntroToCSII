/***********************************
* Author: Kyle De Laurell
* Date: 3/4/16
* Description: Main Functions source file
***********************************/

#include "mainFunctions.hpp"
#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

//*****************************************
//gets the percentage for a number entering
//the buffer
//*****************************************
int getEnterPercentage(){
  int enterP;
  cout << "Please enter a percentage for a number entering the buffer" << endl;
  cin >> enterP;

  while (enterP < 1 || enterP > 100){
    cout << "please enter a valid percentage between 0 and 100." << endl;
    cin >> enterP;
  }

  return enterP;
}

int getExitPercentage(){
  int exitP;
  cout << "Please enter a percentage for a number exiting the buffer" << endl;
  cin >> exitP;

  while (exitP < 1 || exitP > 100){
    cout << "please enter a valid percentage between 0 and 100." << endl;
    cin >> exitP;
  }

  return exitP;

}

//***************************************
//gets number of rounds user wants to see
//***************************************
int getNumRounds(){
  int numRounds;
  cout << "Please enter the number of rounds you want to see." << endl;
  cin >> numRounds;

  while (numRounds < 1){
    cout << "please enter a valid number greater than 0." << endl;
    cin >> numRounds;
  }

  return numRounds;
}

//***********************************************
//gets the string the user wants to see displayed
//backwards
//***********************************************
string getPalindromeString(){
  string palindrome;

  cout << "Please enter a word or phrase that you would like to" << endl;
  cout << "see printed both forward and backward." << endl;
  cin.ignore();
  getline(cin, palindrome);

  return palindrome;
}
