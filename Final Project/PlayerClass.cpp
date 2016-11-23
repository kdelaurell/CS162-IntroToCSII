/**********************************
* Author: Kyle De Laurell
* Date: 3/9/16
* Description: Player Source file
**********************************/
#include "PlayerClass.hpp"
#include <deque>
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
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::deque;
using std::string;

class Spaces;
class Lobby;
class LockerRoom;
class FrontDoor;

Player::Player(Spaces* startingLocation){
  this->currentLocation = startingLocation;
}

Player::~Player(){

}

void Player::addItem(string newItem){
  (this->satchel).push_front(newItem);
}

string Player::dropItem(){
  string dropItem;
  int size = (this->satchel).size();
  int dropChoice;

  for(int index = 0; index < size; index++){
    cout << (index + 1) << ". Drop " << (this->satchel).at(index) << endl;
  }
  cin >> dropChoice;

  while(dropChoice > size || dropChoice < 1){
    cout << "Invalid Choice. Please make a valid Choice!" << endl;
    cin >> dropChoice;
  }

  dropItem = (this->satchel).at(dropChoice - 1);
  cout << "You dropped " << dropItem << ". It disappeared!" << endl;
  cout << "Hopefully that was not important! It may appear in another room!" << endl;
  cout << "If you are Lucky!" << endl;

  (this->satchel).erase((this->satchel).begin() + (dropChoice - 1));

  return dropItem;
}

bool Player::satchelEmpty(){
  if((this->satchel).empty()){
    return true;
  }
  else{
    return false;
  }
}

bool Player::satchelFull(){
  if((this->satchel).size() >= 3){
    return true;
  }
  else{
    return false;
  }
}

void Player::changeLocation(Spaces* newLocation){
  this->currentLocation = newLocation;
}

Spaces* Player::getCurrentLocation(){
  return this->currentLocation;
}

string Player::useSatchelItems(){
  string useItem;
  int size = (this->satchel).size();
  if(size != 0){
    int useChoice;
    for(int index = 0; index < size; index++){
      cout << (index + 1) << ". Use " << (this->satchel).at(index) << endl;
    }
    cin >> useChoice;
    while(useChoice <= 0 || useChoice > size){
      cout << "Invalid Choice! Please Enter a valid option!" << endl;
      cin >> useChoice;
    }
    useItem = (this->satchel).at(useChoice - 1);
  }
  else{
    useItem = "";
  }
  return useItem;
}

bool Player::hasKey(){
  string keyItem = "Key";
  int size = (this->satchel).size();
  if(size != 0){
    for(int index = 0; index < size; index++){
      if((this->satchel).at(index) == keyItem)
        return true;
    }
  }
  return false;
}
