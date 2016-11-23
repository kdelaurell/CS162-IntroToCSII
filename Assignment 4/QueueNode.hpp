/************************************************
 * Author: Kyle De Laurell
 * Date: 2/9/16
 * Description: Queue Node header file
 ************************************************/
#ifndef QueueNode_HPP
#define QueueNode_HPP
#include "Medusa.hpp"
#include "Creature.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
struct QueueNode{
    Creature* creatureNode;
    QueueNode *next;
    QueueNode *prev;
};

#endif
