/**********************************
* Author: Kyle De Laurell
* Date: 3/9/16
* Description: Front Door header file
**********************************/

#ifndef FrontDoor_HPP
#define FrontDoor_HPP
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

class FrontDoor : public Spaces{
private:
  Spaces* cR1;
  Spaces* cR2;
  Spaces* cR3;
  Spaces* cR4;
  Spaces* cR5;
  Spaces* cR6;
  Spaces* cR7;
  string roomName;
  string roomMonster;
  string roomItem;
  //Special* roomSpecial;

public:
  FrontDoor(string, string, string);
  ~FrontDoor();
  virtual int enterRoom();
  virtual void DisplayRoomOptions();
  virtual void setConnectedRooms(Spaces*, Spaces*, Spaces*, Spaces*, Spaces*, Spaces*, Spaces*);
  virtual string getName();
  virtual string getRoomItem();
  virtual int creatureAttack();
  virtual int intiateSpecial();
};

#endif
