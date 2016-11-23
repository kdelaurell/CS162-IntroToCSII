/**********************************
* Author: Kyle De Laurell
* Date: 3/9/16
* Description: PenaltyBox Source file
**********************************/

#include "Spaces.hpp"
#include "LockerRoom.hpp"
#include "Closet.hpp"
#include "Bathroom.hpp"
#include "PenaltyBox.hpp"
#include "Bench.hpp"
#include "IceRink.hpp"
#include "Stands.hpp"
#include "PressBox.hpp"
#include "ArenaArea.hpp"
#include "FrontDoor.hpp"
#include "Lobby.hpp"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

PenaltyBox::PenaltyBox(string name, string itemName, string monsterName){
  this->cR1 = NULL;
  this->cR2 = NULL;
  this->cR3 = NULL;
  this->cR4 = NULL;
  this->cR5 = NULL;
  this->cR6 = NULL;
  this->cR7 = NULL;
  this->roomName = name;
  this->roomItem = itemName;
  this->roomMonster = monsterName;
}

PenaltyBox::~PenaltyBox(){

}

/**************************************************************
* Description: Displays what room you are in and if you
* ran into a monster.
***************************************************************/
int PenaltyBox::enterRoom(){
  cout << "You have moved into " << this->roomName << endl;

  if(this->roomMonster != ""){
    cout << "OH NO! You have run into a " << this->roomMonster << "!" << endl;
    cout << "An item from your satchel may help you!" << endl;
    return 1;
  }
  else{
    return 2;
  }
}

void PenaltyBox::DisplayRoomOptions(){
  int optionCounter = 0;
  if(this->cR1 != NULL){
    optionCounter++;
    cout << "Option " << optionCounter << ": " << "Move to " << (this->cR1)->getName() << endl;
  }
  if(this->cR2 != NULL){
    optionCounter++;
    cout << "Option " << optionCounter << ": " << "Move to " << (this->cR2)->getName() << endl;
  }
  if(this->cR3 != NULL){
    optionCounter++;
    cout << "Option " << optionCounter << ": " << "Move to " << (this->cR3)->getName() << endl;
  }
  if(this->cR4 != NULL){
    optionCounter++;
    cout << "Option " << optionCounter << ": " << "Move to " << (this->cR4)->getName() << endl;
  }
  if(this->cR5 != NULL){
    optionCounter++;
    cout << "Option " << optionCounter << ": " << "Move to " << (this->cR5)->getName() << endl;
  }
  if(this->cR6 != NULL){
    optionCounter++;
    cout << "Option " << optionCounter << ": " << "Move to " << (this->cR6)->getName() << endl;
  }
  if(this->cR7 != NULL){
    optionCounter++;
    cout << "Option " << optionCounter << ": " << "Move to " << (this->cR7)->getName() << endl;
  }
}

void PenaltyBox::DisplayItemOptions(){
  cout << "Option 8: Pick up " << this->roomItem << endl;
}

void PenaltyBox::setConnectedRooms(Spaces* room1, Spaces* room2, Spaces* room3, Spaces* room4, Spaces* room5, Spaces* room6, Spaces* room7){
  this->cR1 = room1;
  this->cR2 = room2;
  this->cR3 = room3;
  this->cR4 = room4;
  this->cR5 = room5;
  this->cR6 = room6;
  this->cR7 = room7;
}

int PenaltyBox::getNumConnectedRooms(){
  int count = 0;
  if(this->cR1 != NULL)
    count++;
  if(this->cR2 != NULL)
    count++;
  if(this->cR3 != NULL)
    count++;
  if(this->cR4 != NULL)
    count++;
  if(this->cR5 != NULL)
    count++;
  if(this->cR6 != NULL)
    count++;
  if(this->cR7 != NULL)
    count++;

  return count;

}

string PenaltyBox::getName(){
  return this->roomName;
}

string PenaltyBox::getRoomItem(){
  string temp;
  temp = this->roomItem;
  this->roomItem = "";
  return temp;
}

void PenaltyBox::addItem(string newOldItem){
  this->roomItem = newOldItem;
}

Spaces* PenaltyBox::getNewLocation(int choice){
  if(choice == 1){
    return this->cR1;
  }
  else if(choice == 2){
    return this->cR2;
  }
  else if(choice == 3){
    return this->cR3;
  }
  else if(choice == 4){
    return this->cR4;
  }
  else if(choice == 5){
    return this->cR5;
  }
  else if(choice == 6){
    return this->cR6;
  }
  else{
    return this->cR7;
  }
}

int PenaltyBox::monsterAttack(string usedItem){
  return 0;
}

bool PenaltyBox::hasItem(){
  if(this->roomItem == "")
    return false;
  else
    return true;
}


int PenaltyBox::intiateSpecial(){
  cout << "Why did you come in here!?" << endl;
  cout << "You lose 5 turns!" << endl;
  return 15;
}
