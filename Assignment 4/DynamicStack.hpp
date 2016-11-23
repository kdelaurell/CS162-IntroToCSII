/************************************************
 * Author: Kyle De Laurell
 * Date: 2/9/16
 * Description: Dynamic Stack header file
 ************************************************/

#ifndef DynamicStack_HPP
#define DynamicStack_HPP
#include "Node.hpp"
#include "Medusa.hpp"
#include "Creature.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"

class DynamicStack{
private:
    Node *top;

public:
  DynamicStack();
  void add(Creature*, int);
  Creature* remove(int*);
};

#endif
