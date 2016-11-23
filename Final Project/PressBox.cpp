/**********************************
* Author: Kyle De Laurell
* Date: 3/9/16
* Description: PressBox Source file
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

PressBox::PressBox(string name, string itemName, string monsterName){
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

PressBox::~PressBox(){

}

/**************************************************************
* Description: Displays what room you are in and if you
* ran into a monster.
***************************************************************/
int PressBox::enterRoom(){
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

void PressBox::DisplayRoomOptions(){
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

void PressBox::DisplayItemOptions(){
  cout << "Option 8: Pick up " << this->roomItem << endl;
}

void PressBox::setConnectedRooms(Spaces* room1, Spaces* room2, Spaces* room3, Spaces* room4, Spaces* room5, Spaces* room6, Spaces* room7){
  this->cR1 = room1;
  this->cR2 = room2;
  this->cR3 = room3;
  this->cR4 = room4;
  this->cR5 = room5;
  this->cR6 = room6;
  this->cR7 = room7;
}

int PressBox::getNumConnectedRooms(){
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

string PressBox::getName(){
  return this->roomName;
}

string PressBox::getRoomItem(){
  string temp;
  temp = this->roomItem;
  this->roomItem = "";
  return temp;
}

void PressBox::addItem(string newOldItem){
  this->roomItem = newOldItem;
}

Spaces* PressBox::getNewLocation(int choice){
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

int PressBox::monsterAttack(string usedItem){
  if(usedItem == "Pipe"){
    cout << "You tried hitting him with the pipe." << endl;
    cout << "Not a smart move. He is too fast." << endl;
    cout << "You pissed him off...so he bit off your head." << endl;
    cout << "GAME OVER!" << endl;
    return -1;
  }
  else if(usedItem == "Skates"){
    cout << "You tried cutting him with the hockey skates." << endl;
    cout << "Terrible idea! It looks like it tickled him." << endl;
    cout << "Unfortunately he ripped off your arms." << endl;
    cout << "GAME OVER!" << endl;
    return -1;
  }
  else if(usedItem == "Key"){
    cout << "I don't know why you would use the key." << endl;
    cout << "Whatever you did with it...It had no effect" << endl;
    cout << "He said you tasted like chicken." << endl;
    cout << "GAME OVER!" << endl;
    return -1;
  }
  else if(usedItem == "Hockey Gloves"){
    cout << "You put on your hockey gloves!" << endl;
    cout << "HE IS TOO FAST!" << endl;
    cout << "He dodged your punches and knocked you out DEAD! GAME OVER!" << endl;
    return -1;
  }
  else if(usedItem == "Hockey Stick"){
    cout << "You tried hitting him with a hockey stick." << endl;
    cout << "Not a smart move. He is too fast." << endl;
    cout << "You pissed him off...so he bit off your head." << endl;
    cout << "GAME OVER!" << endl;
    return -1;
  }
  else if(usedItem == "Microphone"){
    cout << "You handed him the Microphone..." << endl;
    cout << "HE SANG AND SANG AND SANG SOME MORE..." << endl;
    cout << "HIS HEAD EXPLODED!" << endl;
    cout << "Your journey may continue" << endl;
    this->roomMonster = "";
    return 2;
  }
  else if(usedItem == "ChainSaw"){
    cout << "You have the secret Weapon! Great Choice!" << endl;
    cout << "You chopped him up into little zombie pieces!" << endl;
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

bool PressBox::hasItem(){
  if(this->roomItem == "")
    return false;
  else
    return true;
}


int PressBox::intiateSpecial(){
  cout << "You turned on the sound system!" << endl;
  cout << "Zombies are dancing to the tune on the ice!" << endl;
  cout << "That's pretty cool" << endl;
  return 2;
}
