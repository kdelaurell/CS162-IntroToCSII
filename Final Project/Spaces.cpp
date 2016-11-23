/**********************************
* Author: Kyle De Laurell
* Date: 3/9/16
* Description: Spaces Source file
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
#include <string>
using std::string;

Spaces::Spaces(){

}

Spaces::Spaces(string name, string itemName, string monsterName){

}

Spaces::~Spaces(){

}

string Spaces::getName(){
  return this->roomName;
}

void Spaces::setConnectedRooms(Spaces* room1, Spaces* room2, Spaces* room3, Spaces* room4, Spaces* room5, Spaces* room6, Spaces* room7){

}

int Spaces::enterRoom(){
  return 0;
}

Spaces* Spaces::getNewLocation(int){
  return NULL;
}

int Spaces::getNumConnectedRooms(){
  return 0;
}

void Spaces::addItem(string newOldItem){

}

void Spaces::DisplayRoomOptions(){

}

void Spaces::DisplayItemOptions(){

}

string Spaces::getRoomItem(){
  return "";
}

int Spaces::monsterAttack(string usedItem){
return 0;
}

bool Spaces::hasItem(){
return true;
}

int Spaces::intiateSpecial(){
return 0;
}
