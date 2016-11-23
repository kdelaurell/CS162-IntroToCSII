/************************************************
 * Author: Kyle De Laurell
 * Date: 2/9/16
 * Description: Dynamic Queue header file
 ************************************************/

#ifndef DynamicQueue_HPP
#define DynamicQueue_HPP
#include "QueueNode.hpp"
#include "Medusa.hpp"
#include "Creature.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"

class DynamicQueue{
private:
    QueueNode *front;
    QueueNode *back;

public:
  DynamicQueue();
  void add(int);
  Creature* remove();
  void rotate();
  Creature* getFrontCreature();
};

#endif
