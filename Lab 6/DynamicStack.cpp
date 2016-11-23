/************************************************
 * Author: Kyle De Laurell
 * Date: 2/9/16
 * Description: Dynamic Stack source file
 ************************************************/

#include "DynamicStack.hpp"
#include "Node.hpp"
#include <iostream>
using std::cout;
using std::endl;

//***********
//constructor
//***********
DynamicStack::DynamicStack(){
  top = NULL;
}

//************************
//adds number to the stack
//************************
void DynamicStack::add(int newNum){
  top = new Node(newNum, top);
}

//*****************************
//removes number from the stack
//*****************************
int DynamicStack::remove(){
  if(!top)
  {
    cout << "It is empty" << endl;
  }
  else
  {
    int num = top->value;
    Node* temp = top;
    top = top->next;
    delete temp;
    return num;
  }
}

