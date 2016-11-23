/**********************************
* Author: Kyle De Laurell
* Date: 3/9/16
* Description: main program source file
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
#include "PlayerClass.hpp"
#include "hockeyRinkFunctions.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
  //intializes Game Clock, current Location, and Hockey Rink
  srand(time(NULL));
  int gameClock = 1;
  int roomAction;
  int ActionChoice;
  string newItem;
  string droppedItem;
  string weaponItem;
  Spaces* currentLocation = NULL;
  Spaces* nextLocation = NULL;
  Spaces* hockeyRink[15];



  //builds Hockey Rink or Maze
  buildHockeyRink(hockeyRink);
  currentLocation = hockeyRink[2];
  //Create the player
  Player* player = new Player(currentLocation);

  //displays the Starting Instructions
  displayStartInstructions();
  cout << "Press any key to BEGIN your journey!" << endl;
  system("read");




do{
  //gets location, displays Rink, and checks room to see options
  cout << "\033[2J";
  currentLocation = player->getCurrentLocation();
  DisplayRink(currentLocation);
  cout << "move #: " << gameClock << endl;
  roomAction = currentLocation->enterRoom();

  //checks to see if the player actually leaves the room
  while(roomAction != 0 && roomAction != -1){

    if(roomAction == 1){
      weaponItem = player->useSatchelItems();
      roomAction = currentLocation->monsterAttack(weaponItem);
    }
    else if(roomAction == 2){
      currentLocation->DisplayRoomOptions();
      if(currentLocation->hasItem()){
        currentLocation->DisplayItemOptions();
      }
      if(!player->satchelEmpty()){
        cout << "Option 9: Drop Item" << endl;
      }
      cout << "Option 0: ????" << endl;
      //gets action input
      cin >> ActionChoice;

      ActionChoice = validateInput(currentLocation, ActionChoice, player);

      //implements action
      if(ActionChoice < 8 && ActionChoice != 0){
        nextLocation = currentLocation->getNewLocation(ActionChoice);
        roomAction = 0;
        if(nextLocation == hockeyRink[1]){
          if(!player->hasKey()){
            cout << "THE DOOR IS LOCKED...it looks like it may need a key..." << endl;
            nextLocation = currentLocation;
            roomAction = 2;
          }
          else{
            cout << "WINNER! YOU HAVE ESCAPED! CONGRATULATIONS ON A JOB WELL DONE!" << endl;
            roomAction = -1;
          }
        }
      }
      else if(ActionChoice == 8){
        if(!player->satchelFull()){
          newItem = currentLocation->getRoomItem();
          player->addItem(newItem);
        }
        else{
          cout << "Satchel is FULL!" << endl;
          roomAction = 2;
        }
      }
      else if(ActionChoice == 9){
        droppedItem = player->dropItem();
        redistributeItem(hockeyRink, droppedItem);
      }
      else if(ActionChoice == 0){
        roomAction = currentLocation->intiateSpecial();
      }
    }
    else if(roomAction == 13){
      hockeyRink[13]->setConnectedRooms(hockeyRink[4], hockeyRink[15], NULL, NULL, NULL, NULL, NULL);
      roomAction = 2;
      cout << "Press Any Key to Continue" << endl;
      system("read");
    }
    else if(roomAction == 14){
      gameClock -= 5;
      roomAction = 2;
      cout << "Press Any Key to Continue" << endl;
      system("read");
    }
    else if(roomAction == 15){
      gameClock += 5;
      nextLocation = hockeyRink[6];
      roomAction = 0;
      cout << "Press Any Key to Continue" << endl;
      system("read");
    }
  }
  player->changeLocation(nextLocation);
  gameClock++;
}while(currentLocation != hockeyRink[1] && gameClock <= 40 && roomAction != -1);

for(int index = 0; index < 16; index++){
  delete hockeyRink[index];
}

  return 0;
}
