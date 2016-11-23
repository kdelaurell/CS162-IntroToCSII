/************************************************
 * Author: Kyle De Laurell
 * Date: 2/11/16
 * Description: Medusa Class Source file
 ***********************************************/
#include "Creature.hpp"
#include "Medusa.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

Medusa::Medusa(){
  this->attack_Die_Sides = 6;
  this->attack_Die_Rolls = 2;
  this->defense_Die_Sides = 6;
  this->defense_Die_Rolls = 1;
  this->armor_Value = 3;
  this->strength_Points = 8;
  this->name = "Medusa";
}

int Medusa::getAttackRoll() const {
  int rollSum = 0;
  int sides = this->attack_Die_Sides;
  int rolls = this->attack_Die_Rolls;
  for (int index = 0; index < rolls; index++)
    {
    rollSum += (rand() % sides + 1);
    usleep(15000);
    }
  
  if (rollSum == 12)
     return 1000;
  else
     return rollSum;
}

int Medusa::getDefenseRoll() const {
  int rollSum = 0;
  int sides = this->defense_Die_Sides;
  int rolls = this->defense_Die_Rolls;

  for (int index = 0; index < rolls; index++)
    {
    rollSum += (rand() % sides + 1);
    usleep(1500);
    }
   
  return rollSum;
}

int Medusa::getArmor() const {
  return this->armor_Value;
}

void Medusa::applyDamage(int attack, int defense, int armor){
  int change;
 
  change = attack - (armor + defense);

  if (change > 0)
    {
    this->strength_Points -= change;
    }
}

int Medusa::getStrengthPoints() const {
  return this->strength_Points;
}

std::string Medusa::getName() const{
  return this->name;
}
