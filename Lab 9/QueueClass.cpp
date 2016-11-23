/***********************************
* Author: Kyle De Laurell
* Date: 3/4/16
* Description: Queue Class source file
***********************************/

#include "QueueClass.hpp"
#include <iostream>
#include <queue>

Queue::Queue(){

}

//adds number to the queue
void Queue::addNumber(int newNum){
  (this->myQueue).push(newNum);
}

//removes number from the queue
void Queue::removeNumber(){
  if(!(this->myQueue).empty())
    (this->myQueue).pop();
}

//gets size of the queue
int Queue::getSize(){
  int size;
  size = (this->myQueue).size();
  return size;
}
