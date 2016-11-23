/***********************************
* Author: Kyle De Laurell
* Date: 3/4/16
* Description: Queue header file
***********************************/

#ifndef StackClass_HPP
#define StackClass_HPP
#include <stack>
#include <string>
using std::string;

class Stack{
private:
  std::stack <char> myStack;

public:
  Stack();
  void addChars(string);
  char print();

};


#endif
