/**********************************
* Author: Kyle De Laurell
* Date: 3/9/16
* Description: IceRink Source file
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
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

IceRink::IceRink(string name, string itemName, string monsterName){
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

IceRink::~IceRink(){

}

/**************************************************************
* Description: Displays what room you are in and if you
* ran into a monster.
***************************************************************/
int IceRink::enterRoom(){
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

void IceRink::DisplayRoomOptions(){
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

void IceRink::DisplayItemOptions(){
  cout << "Option 8: Pick up " << this->roomItem << endl;
}

void IceRink::setConnectedRooms(Spaces* room1, Spaces* room2, Spaces* room3, Spaces* room4, Spaces* room5, Spaces* room6, Spaces* room7){
  this->cR1 = room1;
  this->cR2 = room2;
  this->cR3 = room3;
  this->cR4 = room4;
  this->cR5 = room5;
  this->cR6 = room6;
  this->cR7 = room7;
}

int IceRink::getNumConnectedRooms(){
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

string IceRink::getName(){
  return this->roomName;
}

string IceRink::getRoomItem(){
  string temp;
  temp = this->roomItem;
  this->roomItem = "";
  return temp;
}

void IceRink::addItem(string newOldItem){
  this->roomItem = newOldItem;
}

Spaces* IceRink::getNewLocation(int choice){
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

int IceRink::monsterAttack(string usedItem){
  if(usedItem == "Pipe"){
    cout << "The pipe on ICE?" << endl;
    cout << "Not a smart move. You slipped and impaled yourself with the pipe" << endl;
    cout << "GAME OVER!" << endl;
    return -1;
  }
  else if(usedItem == "Skates"){
    cout << "SMART CHOICE." << endl;
    cout << "You tossed on the skates and started gliding around like a pro!" << endl;
    cout << "Maybe you could play hockey???" << endl;
    cout << "Your journey continues!" << endl;
    return 2;
  }
  else if(usedItem == "Key"){
    cout << "I don't know why you would use the key." << endl;
    cout << "Whatever you did with it...It had no effect" << endl;
    cout << "You slipped and cracked open your head!" << endl;
    cout << "GAME OVER!" << endl;
    return -1;
  }
  else if(usedItem == "Hockey Gloves"){
    cout << "You put on your hockey gloves!" << endl;
    cout << "Almost! But that doesn't really help you stand on the ice!" << endl;
    cout << "You slipped did a double back flip and landed on your head! DEAD! GAME OVER!" << endl;
    return -1;
  }
  else if(usedItem == "Hockey Stick"){
    cout << "You grabbed your Hockey Stick" << endl;
    cout << "Almost! But that doesn't really help you stand on the ice!" << endl;
    cout << "You slipped and impaled yourself with the stick! DEAD! GAME OVER!" << endl;
    return -1;
  }
  else if(usedItem == "Microphone"){
    cout << "the Microphone..." << endl;
    cout << "Not your brightest idea..." << endl;
    cout << "You slipped and accidentally swallowed the Microphone choked and Died!" << endl;
    cout << "GAME OVER!" << endl;
    return -1;
  }
  else if(usedItem == "ChainSaw"){
    cout << "You have the secret Weapon! Great Choice!" << endl;
    cout << "You chopped up the ICE so it is no more!" << endl;
    cout << "Your journey may continue" << endl;
    this->roomMonster = "";
    return 2;
  }
  else{
    cout << "You dont have any Items in your satchel...." << endl;
    cout << "That CAN'T be good..." << endl;
    cout << "You're Dead!" << endl;
    cout << "GAME OVER!" << endl;
    return -1;
  }
}

bool IceRink::hasItem(){
  if(this->roomItem == "")
    return false;
  else
    return true;
}


int IceRink::intiateSpecial(){
  cout << "You are playing hockey with a bunch of zombies! That is pretty sweet!" << endl;
  int yourScore = rand() % 5;
  int opponentScore = rand() % 5;
  if(yourScore > opponentScore){
    cout << "Congrats your team won " << yourScore << "-" << opponentScore << "!" << endl;
    cout << "You scored the Game Winning Goal! You won 5 extra moves!" << endl;
    return 14;
  }
  else if(yourScore == opponentScore){
    cout << "You TIED! Play Again soon! Maybe you will win next time!" << endl;
    return 2;
  }
  else{
    cout << "You Lost! Got into a Fight and got sent to the Penalty Box!" << endl;
    cout << "What a GOON! You lost 5 moves!" << endl;
    return 15;
  }
}
