/************************************************
 * Author: Kyle De Laurell
 * Date: 2/9/16
 * Description: Dynamic Stack source file
 ************************************************/

#include "DynamicStack.hpp"
#include "Node.hpp"
#include "Medusa.hpp"
#include "Creature.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include <iostream>
using std::cout;
using std::endl;

//***********
//constructor
//***********
DynamicStack::DynamicStack(){
  top = NULL;
}

//************************
//adds number to the stack
//************************
void DynamicStack::add(Creature* newCreature, int teamNum){
  top = new Node(newCreature, top, teamNum);
}

//*****************************
//removes number from the stack
//*****************************
Creature* DynamicStack::remove(int* teamNum){
  if(!top)
  {
    return NULL;
  }
  else
  {
    Creature* removedCreature = top->creatureNode;
    Node* temp = top;
    *teamNum = top->team;
    top = top->next;
    delete temp;
    return removedCreature;
  }
}
