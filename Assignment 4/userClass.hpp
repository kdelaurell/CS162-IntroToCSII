/************************************************
* Author: Kyle De Laurell
* Date: 2/11/16
* Description: User Class Header File
*************************************************/
#ifndef userClass_HPP
#define userClass_HPP
#include "DynamicQueue.hpp"
#include "QueueNode.hpp"
class User{
private:
  DynamicQueue* lineup;
  int points;

public:
  User();
  bool lineupEmpty();
  Creature* getNextFighter();
  void addCreature(int);
  void win();
  Creature* lose();
  int getPoints();

friend class DynamicQueue;
friend class QueueNode;
};

#endif
