/**********************************
* Author: Kyle De Laurell
* Date: 3/9/16
* Description: hockey Rink Functions
* source file
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
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void displayStartInstructions(){
  cout << "Welcome to the Haunted Hockey Hall of Fame!!!" << endl;
  cout << "Try and find your way out the Front Door of the" << endl;
  cout << "Hockey Rink before it collapses!" << endl << endl;
  cout << "Rules/Goals:" << endl;
  cout << "Goal: Find a way to get out the front door." << endl;
  cout << "You have 40 moves before the Rink collapses." << endl;
  cout << "You will have to navigate through the rink, Collect Items, and fight zombies" << endl;
  cout << "in order to get out the front door!" << endl;
  cout << "Good Luck! I hope you make it out ALIVE!!!" << endl << endl << endl;
}

void buildHockeyRink(Spaces* *hockeyRink){
  hockeyRink[0] = new LockerRoom("Locker Room 1", "", "Zombie Hockey Player");
  hockeyRink[1] = new FrontDoor("Front Door", "", "");
  hockeyRink[2] = new Lobby("Lobby 1", "Skates", "");
  hockeyRink[3] = new Lobby("Lobby 2", "", "");
  hockeyRink[4] = new Lobby("Lobby 3", "", "");
  hockeyRink[5] = new ArenaArea("Arena Area", "", "");
  hockeyRink[6] = new PenaltyBox("PenaltyBox", "", "");
  hockeyRink[7] = new IceRink("Ice Rink", "", "Slippery Ice");
  hockeyRink[8] = new Bench("Bench", "Hockey Stick", "");
  hockeyRink[9] = new Bathroom("Bathroom 1", "", "");
  hockeyRink[10] = new Bathroom("Bathroom 2", "Pipe", "");
  hockeyRink[11] = new Stands("Stands", "", "Zombie Parents");
  hockeyRink[12] = new PressBox("Press Box", "Key", "Zombie Announcers");
  hockeyRink[13] = new Closet("Closet", "Microphone", "");
  hockeyRink[14] = new Lobby("LockerRoom 2", "Hockey Gloves", "");
  hockeyRink[15] = new Closet("SECRET CLOSET", "ChainSaw", "");


  //Player* player = new Player(hockeyRink[2]);

  hockeyRink[0]->setConnectedRooms(hockeyRink[9], hockeyRink[5], NULL, NULL, NULL, NULL, NULL);
  hockeyRink[1]->setConnectedRooms(NULL, NULL, NULL, NULL, NULL, NULL, NULL);
  hockeyRink[2]->setConnectedRooms(hockeyRink[3], hockeyRink[5], NULL, NULL, NULL, NULL, NULL);
  hockeyRink[3]->setConnectedRooms(hockeyRink[1], hockeyRink[4], hockeyRink[5], hockeyRink[2], NULL, NULL, NULL);
  hockeyRink[4]->setConnectedRooms(hockeyRink[13], hockeyRink[5], hockeyRink[3], NULL, NULL, NULL, NULL);
  hockeyRink[5]->setConnectedRooms(hockeyRink[2], hockeyRink[3], hockeyRink[4], hockeyRink[0], hockeyRink[14], hockeyRink[7], hockeyRink[11]);
  hockeyRink[6]->setConnectedRooms(hockeyRink[7], NULL, NULL, NULL, NULL, NULL, NULL);
  hockeyRink[7]->setConnectedRooms(hockeyRink[8], hockeyRink[5], hockeyRink[6], NULL, NULL, NULL, NULL);
  hockeyRink[8]->setConnectedRooms(hockeyRink[7], NULL, NULL, NULL, NULL, NULL, NULL);
  hockeyRink[9]->setConnectedRooms(hockeyRink[0], NULL, NULL, NULL, NULL, NULL, NULL);
  hockeyRink[10]->setConnectedRooms(hockeyRink[14], NULL, NULL, NULL, NULL, NULL, NULL);
  hockeyRink[11]->setConnectedRooms(hockeyRink[5], hockeyRink[12], NULL, NULL, NULL, NULL, NULL);
  hockeyRink[12]->setConnectedRooms(hockeyRink[11], NULL, NULL, NULL, NULL, NULL, NULL);
  hockeyRink[13]->setConnectedRooms(hockeyRink[4], NULL, NULL, NULL, NULL, NULL, NULL);
  hockeyRink[14]->setConnectedRooms(hockeyRink[10], hockeyRink[5], NULL, NULL, NULL, NULL, NULL);
  hockeyRink[15]->setConnectedRooms(hockeyRink[13], hockeyRink[5], hockeyRink[9], hockeyRink[10], hockeyRink[12], NULL, NULL);

  //currentLocation = hockeyRink[4];
}

void DisplayRink(Spaces* currentLocation){
  string rN = currentLocation->getName();
  cout << "     ______ " << "          " << " ______________ " << endl;
  cout << "    |closet|" << "          " << "| Bath | Bath  |" << endl;
  cout << "    |      |" << "          " << "| Room1| Room2 |" << endl;
  cout << "    |___  _|" << "__________" << "|__  __|__  ___|" << endl;
  cout << "    |      |" << "          " << "|Locker|Locker |" << endl;
  cout << "    |Lobby3 " << "          " << "|Room 1|Room 2 |" << endl;
  cout << "____|__  __|" << "          " << "|_  ___|__  ___|___" << "__________" << endl;
  cout << "|F D|      |" << "          " << "                   " << "    |    |" << endl;
  cout << "|R O|      |" << "   Arena  " << "                   " << "    |    |_____ " << endl;
  cout << "|O O Lobby2 " << "          " << "      __  ___      " << "    | S  |     |" << endl;
  cout << "|N R|      |" << "   Area   " << "      |     |__    " << "      T  |Press|" << endl;
  cout << "|T__|__ ___|" << "          " << "    __| Ice | B|   " << "      A    Box |" << endl;
  cout << "    |      |" << "          " << "    |B|Rink | E|   " << "    | N  |     |" << endl;
  cout << "    |      |" << "          " << "    |O        N|   " << "    | D  |_____|" << endl;
  cout << "    |Lobby1 " << "          " << "    |X|     | C|   " << "    | S  |" << endl;
  cout << "    |      |" << "          " << "    |_|     | H|   " << "    |    |" << endl;
  cout << "    |______|" << "__________" << "______|_____|__|___" << "____|____|" << endl;
}

void redistributeItem(Spaces* *hockeyRink, string droppedItem){
  bool roomsFull = true;
  int randRoomNum;
  for(int index = 0; index < 16; index++){
      if(!hockeyRink[index]->hasItem()){
        if(hockeyRink[index]->getName() != "Front Door"){
          roomsFull = false;
        }
      }
  }

  if(!roomsFull){
    bool addedItem = false;
    while(!addedItem){
      randRoomNum = rand() % 17;
      if(!hockeyRink[randRoomNum]->hasItem()){
        if(hockeyRink[randRoomNum]->getName() != "Front Door"){
          hockeyRink[randRoomNum]->addItem(droppedItem);
          addedItem = true;
        }
      }
    }
  }
}

int validateInput(Spaces* currentLocation, int ActionChoice, Player* player){
  bool inputCheck;
  int newChoice = ActionChoice;
  //checks input is valid
  inputCheck = false;
  while(inputCheck == false){
    inputCheck = true;
    if(newChoice == 9){
      if(player->satchelEmpty()){
        while(newChoice == 9){
          cout << "Satchel Empty. You cannot drop an item!" << endl;
          cout << "Please Select a valid Choice." << endl;
          cin >> newChoice;
          inputCheck = false;
        }
      }
    }
    else if(newChoice == 8){
      if(player->satchelFull()){
        while(newChoice == 8){
          cout << "Satchel is Full! You cannot add an item." << endl;
          cout << "Please select a different option or drop an item first." << endl;
          cin >> newChoice;
          inputCheck = false;
        }
      }
      if(!currentLocation->hasItem()){
        while(newChoice == 8){
          cout << "There is no Item in this Room! You cannot add an item." << endl;
          cout << "Please select a different option." << endl;
          cin >> newChoice;
          inputCheck = false;
        }
      }
    }
    if(((newChoice > currentLocation->getNumConnectedRooms()) && newChoice != 8 && newChoice != 9) || newChoice < 0){
      cout << "Please enter a valid Choice." << endl;
      cin >> newChoice;
      inputCheck = false;
    }
  }
  return newChoice;
}
