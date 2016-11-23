/************************************************
 * Author: Kyle De Laurell
 * Date: 2/9/16
 * Description: Node header file
 ***********************************************/
#ifndef Node_HPP
#define Node_HPP
#include "Medusa.hpp"
#include "Creature.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"

class Node{
  friend class DynamicStack;
  private:
    Creature* creatureNode;
    int team;
    Node *next;
  public:
    Node(Creature *newCreature, Node *nextCreature, int teamNum){
       this->creatureNode = newCreature;
       this->team = teamNum;
       this->next = nextCreature;
    };
    Creature* getCreature(){
      return this->creatureNode;
    };
    Node* getNext(){
      return this->next;
    };

};

#endif
