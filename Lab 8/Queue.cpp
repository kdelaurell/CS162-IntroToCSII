/************************************************
 * Author: Kyle De Laurell
 * Date: 2/22/16
 * Description: Queue source file
 ************************************************/

#include "Queue.hpp"
#include "QueueNode.hpp"
#include <iostream>
using std::cout;
using std::endl;

//***********
//constructor
//***********
Queue::Queue(){
QueueNode first;
first.value = -1;
first.next = &first;
first.prev = &first;
}

//***********
//destructor
//***********
Queue::~Queue(){

}

//************************
//adds number to the Queue
//************************
void Queue::addBack(int newNum){

 if(back == front)
 {
cout << "new" << endl;
 }
 else
 {
  cout << "not new"
 }
}

//*****************************
//removes number from the queue
//*****************************
int Queue::removeFront(){
 if(front == back)
 {
   cout << "It is empty" << endl;
 }
 else
 {
   cout << "Hi" << endl;
 }
}
