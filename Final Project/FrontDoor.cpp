/**********************************
* Author: Kyle De Laurell
* Date: 3/9/16
* Description: Front Door Source file
**********************************/

#include "Spaces.hpp"
#include "Lobby.hpp"
#include "LockerRoom.hpp"
#include "FrontDoor.hpp"
#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

FrontDoor::FrontDoor(string name, string itemName, string monsterName){
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

FrontDoor::~FrontDoor(){

}

int FrontDoor::enterRoom(){
  return 0;
}

/**************************************************************
* Description: Displays what room you are in and if you
* ran into a monster.
***************************************************************/
void FrontDoor::DisplayRoomOptions(){
  cout << "Congratulations!!! You made it out!!!" << endl;
}

void FrontDoor::setConnectedRooms(Spaces* room1, Spaces* room2, Spaces* room3, Spaces* room4, Spaces* room5, Spaces* room6, Spaces* room7){
  this->cR1 = room1;
  this->cR2 = room2;
  this->cR3 = room3;
  this->cR4 = room4;
  this->cR5 = room5;
  this->cR6 = room6;
  this->cR7 = room7;
}

string FrontDoor::getName(){
  return this->roomName;
}

string FrontDoor::getRoomItem(){
  string temp;
  temp = this->roomItem;
  this->roomItem = "";
  return temp;
}

int FrontDoor::creatureAttack(){
  return 0;
}

int FrontDoor::intiateSpecial(){
  return 0;
}
