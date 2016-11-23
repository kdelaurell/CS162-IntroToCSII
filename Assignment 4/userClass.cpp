/************************************************
* Author: Kyle De Laurell
* Date: 2/11/16
* Description: User Class Source File
*************************************************/

#include "userClass.hpp"
#include "DynamicQueue.hpp"
#include "QueueNode.hpp"
#include <iostream>
using std::cout;
using std::endl;

User::User(){
  this->points = 0;
  this->lineup = new DynamicQueue();
}

bool User::lineupEmpty(){
  if((this->lineup)->getFrontCreature() == NULL){
    return true;
  }
  else
    return false;
}

void User::addCreature(int charChoice){
  (this->lineup)->add(charChoice);
}

void User::win(){
  this->points++;
  (this->lineup)->rotate();
}

Creature* User::lose(){
  Creature* temp;
  temp = (this->lineup)->remove();
  return temp;
}

Creature* User::getNextFighter(){
  Creature* temp;
  temp = (this->lineup)->getFrontCreature();
  return temp;
}

int User::getPoints(){
  return this->points;
}
