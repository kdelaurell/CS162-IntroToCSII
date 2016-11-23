/**********************************
* Author: Kyle De Laurell
* Date: 3/9/16
* Description: Spaces header file
**********************************/

#ifndef Spaces_HPP
#define Spaces_HPP
#include <string>
using std::string;

class Spaces{
protected:
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
  Spaces();
  Spaces(string, string, string);
  ~Spaces();
  virtual int enterRoom();
  virtual void DisplayRoomOptions();
  virtual void DisplayItemOptions();
  virtual void setConnectedRooms(Spaces*, Spaces*, Spaces*, Spaces*, Spaces*, Spaces*, Spaces*);
  virtual int getNumConnectedRooms();
  virtual void addItem(string);
  virtual Spaces* getNewLocation(int);
  virtual string getName();
  virtual string getRoomItem();
  virtual int monsterAttack(string);
  virtual bool hasItem();
  virtual int intiateSpecial();
};

#endif
