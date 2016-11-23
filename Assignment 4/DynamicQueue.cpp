/************************************************
 * Author: Kyle De Laurell
 * Date: 2/9/16
 * Description: Dynamic Queue source file
 ************************************************/

#include "DynamicQueue.hpp"
#include "QueueNode.hpp"
#include "Medusa.hpp"
#include "Creature.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include <iostream>
using std::cout;
using std::endl;

//***********
//constructor
//***********
DynamicQueue::DynamicQueue(){
  QueueNode* first;
  first = new QueueNode;
  first->next = first;
  first->creatureNode = NULL;
  first->prev = first;
  front = first;
  back = first;
}

//************************
//adds number to the Queue
//************************
void DynamicQueue::add(int creatureChoice){
  Creature* temp;
  if (creatureChoice == 1)
    temp = new Medusa();
  else if(creatureChoice == 2)
    temp = new Barbarian();
  else if(creatureChoice == 3)
    temp = new Vampire();
  else if(creatureChoice == 4)
    temp = new BlueMen();
  else if(creatureChoice == 5)
    temp = new HarryPotter();

 if(back == front){
   if(front->creatureNode == NULL){
     front->creatureNode = temp;
   }
   else{
     if(front->next == back){
       back = new QueueNode;
       front->next = back;
       front->prev = back;
       back->prev = front;
       back->next = front;
       back->creatureNode = temp;
     }
     else{
       back = front->next;
       back->creatureNode = temp;
     }
   }

 }
 else
 {
   QueueNode* tempNode;
   tempNode = new QueueNode;
   tempNode->prev = back;
   tempNode->next = front;
   tempNode->creatureNode = temp;
   back->next = tempNode;
   back = tempNode;
 }
}


//*****************************
//removes number from the queue
//*****************************
Creature* DynamicQueue::remove(){
   Creature* removedCreature = front->creatureNode;
   if(front != back){
     QueueNode* temp = front;
     front = temp->next;
     back->next = front;
     delete temp;
   }
   else{
     front->creatureNode = NULL;
   }
   return removedCreature;
}

void DynamicQueue::rotate(){
  QueueNode* temp = front;
  front = temp->next;
  temp = back;
  back = temp->next;
}

Creature* DynamicQueue::getFrontCreature(){
  return front->creatureNode;
}
