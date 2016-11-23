/************************************************
* Author: Kyle De Laurell
* Date: 2/11/16
* Description: Main Functions Header file
*************************************************/
#ifndef mainFunctions_HPP
#define mainFunctions_HPP
#include "Medusa.hpp"
#include "Creature.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include "userClass.hpp"


int getNumFighters();

void initializeUser(int, User*);

void fight(Creature*, Creature*, bool);

//void displayFinalResults();

//void finalMenu();i



#endif
