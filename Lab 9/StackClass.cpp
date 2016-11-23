/***********************************
* Author: Kyle De Laurell
* Date: 3/4/16
* Description: Queue Class source file
***********************************/

#include "StackClass.hpp"
#include <iostream>
#include <stack>
#include <string>
using std::string;
using std::cout;
using std::endl;

Stack::Stack(){

}

//adds chars to the stack from the inputted string
void Stack::addChars(string pal){
  int palSize = pal.size();
  char insertChar;
  int backCount;
  for(int index = 0; index < (palSize * 2); index++){
    if(index < palSize){
      insertChar = pal.at(index);
      (this->myStack).push(insertChar);
    }
    else if(index == palSize){
      backCount = index;
      backCount--;
      insertChar = pal.at(backCount);
      (this->myStack).push(insertChar);
    }
    else if(index > palSize){
      backCount--;
      insertChar = pal.at(backCount);
      (this->myStack).push(insertChar);
    }
  }

}


//returns char from top of stack
char Stack::print(){
  char outputChar;
  outputChar = (this->myStack).top();
  (this->myStack).pop();
  return outputChar;
}
