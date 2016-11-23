/************************************************
 * Author: Kyle De Laurell
 * Date: 2/9/16
 * Description: Dynamic Queue source file
 ************************************************/

#include "DynamicQueue.hpp"
#include "QueueNode.hpp"
#include <iostream>
using std::cout;
using std::endl;

//***********
//constructor
//***********
DynamicQueue::DynamicQueue(){
 front = NULL;
 back  = NULL;
}

//************************
//adds number to the Queue
//************************
void DynamicQueue::add(int newNum){

 if(back == NULL)
 {
   back = new QueueNode(newNum, front, back);
   front = back;
 }
 else
 {
    QueueNode *temp;
    temp = back;
    back = new QueueNode(newNum, NULL, temp);
    temp->next = back;  
 }
}

//*****************************
//removes number from the queue
//*****************************
int DynamicQueue::remove(){
 if(front == NULL)
 {
   cout << "It is empty" << endl;
 }
 else
 {
   int num = front->value;
   QueueNode* temp = front;
   front = temp->next;
   delete temp;
   return num;
 }
}
