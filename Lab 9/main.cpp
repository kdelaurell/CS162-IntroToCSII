/***********************************
* Author: Kyle De Laurell
* Date: 3/4/16
* Description: Main source file
***********************************/

#include <iostream>
#include <stack>
#include <queue>
#include "mainFunctions.hpp"
#include "QueueClass.hpp"
#include "StackClass.hpp"

using std::cout;
using std::cin;
using std::endl;

int main(){
  //intiates variables
  int enterP;
  int exitP;
  int numRounds;
  int countRounds = 0;
  int randEnterP;
  int randExitP;
  int averageSize;
  int queueSize = 0;
  string palindrome;
  Queue randQueue;
  Stack palStack;
  srand(time(NULL));

  //gets the numbers needed
  enterP = getEnterPercentage();
  exitP = getExitPercentage();
  numRounds = getNumRounds();

  //adds numbers and removes numbers and displays queue Size
  for (int index = 0; index < numRounds; index++){
    countRounds++;
    randEnterP = rand() % 100 + 1;
    randExitP = rand() % 100 + 1;

    if (randEnterP <= enterP){
      randQueue.addNumber(1);
    }

    if (randExitP <= exitP){
      randQueue.removeNumber();
    }
    queueSize += randQueue.getSize();
    averageSize = queueSize/countRounds;
    cout << "The Average Queue Size is " << averageSize << endl;
  }

  //gets palindrome and then displays it
  palindrome = getPalindromeString();
  palStack.addChars(palindrome);

  char outputChar;
  int palSize = palindrome.size();
  for(int index = 0; index < (palSize * 2); index++){
    outputChar = palStack.print();
    cout << outputChar;
  }

  cout << endl;


  return 0;
}
