/************************************************
* Author: Kyle De Laurell
* Date: 2/11/16
* Description: Main Functions Source file
*************************************************/

#include "mainFunctions.hpp"
#include "Medusa.hpp"
#include "Creature.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include "userClass.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int getNumFighters(){
  int numFighters;
  cout << "Please enter the number of Creatures" << endl;
  cout << "you would like each user to fight with?" << endl;
  cin >> numFighters;
  return numFighters;
}

void initializeUser(int numFighters, User* inputU) {
  int choice;
  cout << "What Creatures would you like in your lineup?" << endl;
  cout << "Please enter " << numFighters << " numbers!" << endl;
  cout << "1. Medusa" << endl;
  cout << "2. Barbarian" << endl;
  cout << "3. Vampire" << endl;
  cout << "4. Blue Men" << endl;
  cout << "5. Harry Potter" << endl;
  for(int index = 0; index < numFighters; index++){
    cin >> choice;
    while (choice < 1 || choice > 5){
      cout << "Error. Please enter a valid Choice" << endl;
      cin >> choice;
    }
    inputU->addCreature(choice);
  }
}

void fight(Creature* fighterUser1, Creature* fighterUser2, bool showStats){
  int fighterUser1attack;
  int fighterUser1armor;
  int fighterUser1defense;
  int fighterUser1SP;
  int fighterUser2attack;
  int fighterUser2defense;
  int fighterUser2armor;
  int fighterUser2SP;

  //char 1 Rolls
  fighterUser1attack = fighterUser1->getAttackRoll();
  fighterUser1defense = fighterUser1->getDefenseRoll();
  fighterUser1armor = fighterUser1->getArmor();
  fighterUser1SP = fighterUser1->getStrengthPoints();

  //char 2 Rolls
  fighterUser2attack = fighterUser2->getAttackRoll();
  fighterUser2defense = fighterUser2->getDefenseRoll();
  fighterUser2armor = fighterUser2->getArmor();
  fighterUser2SP = fighterUser2->getStrengthPoints();

  //Apply Damages
  fighterUser2->applyDamage(fighterUser1attack, fighterUser2defense, fighterUser2armor);
  fighterUser1->applyDamage(fighterUser2attack, fighterUser1defense, fighterUser1armor);

  if(showStats){
    cout << fighterUser1->getName() << " Starting Strength: " << fighterUser1SP << endl;
    cout << fighterUser2->getName() << " Attack: " << fighterUser2attack << endl;
    cout << fighterUser1->getName() << " Defense:  " << fighterUser1defense << endl;
    cout << fighterUser1->getName() << " Armor: " << fighterUser1armor << endl;
    cout << fighterUser1->getName() << " Ending Strength: " << fighterUser1->getStrengthPoints() << endl << endl;

    if(fighterUser1->getStrengthPoints() > 0)
    {
      cout << fighterUser2->getName() << " Starting Strength: " << fighterUser2SP << endl;
      cout << fighterUser1->getName() << " Attack: " << fighterUser1attack << endl;
      cout << fighterUser2->getName() << " Defense:  " << fighterUser2defense << endl;
      cout << fighterUser2->getName() << " Armor: " << fighterUser2armor << endl;
      cout << fighterUser2->getName() << " Ending Strength: " << fighterUser2->getStrengthPoints() << endl;
    }
  }
}
