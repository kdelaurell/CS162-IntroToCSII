/**********************************
* Author: Kyle De Laurell
* Date: 3/9/16
* Description: Player header file
**********************************/
#ifndef PlayerClass_HPP
#define PlayerClass_HPP
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
#include <deque>

using std::deque;
using std::string;
class Spaces;
class Lobby;
class LockerRoom;
class FrontDoor;
class Player{
private:
  Spaces* currentLocation;
  int moveCounter;
  deque <string> satchel;

public:
  Player(Spaces*);
  ~Player();
  void addItem(string);
  string dropItem();
  bool satchelEmpty();
  bool satchelFull();
  Spaces* getCurrentLocation();
  void changeLocation(Spaces*);
  bool hasKey();
  string useSatchelItems();
};

#endif
