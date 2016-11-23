/**********************************
* Author: Kyle De Laurell
* Date: 3/9/16
* Description: Hockey Rink Functions
* header file
**********************************/
#ifndef hockeyRinkFunctions_HPP
#define hockeyRinkFunctions_HPP
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

void displayStartInstructions();
void buildHockeyRink(Spaces* *hockeyRink);
void DisplayRink(Spaces*);
void redistributeItem(Spaces* *hockeyRink, string droppedItem);
int validateInput(Spaces* currentLocation, int ActionChoice, Player* player);



#endif
