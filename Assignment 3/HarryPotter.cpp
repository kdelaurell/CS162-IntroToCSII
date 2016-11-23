/************************************************
 * Author: Kyle De Laurell
 * Date: 2/11/16
 * Description: Harry Potter Class Source file
 *************************************************/
#include "Creature.hpp"
#include "HarryPotter.hpp"
#include <string>
#include <cstdlib>
#include <iostream>
HarryPotter::HarryPotter(){
  this->attack_Die_Sides = 6;
  this->attack_Die_Rolls = 2;
  this->defense_Die_Sides = 6;
  this->defense_Die_Rolls = 1;
  this->armor_Value = 3;
  this->strength_Points = 10;
  this->name = "Harry Potter";
  this->ressurrected = false;
}

int HarryPotter::getAttackRoll() const {
  int rollSum = 0;
  int sides = this->attack_Die_Sides;
  int rolls = this->attack_Die_Rolls;
  for (int index = 0; index < rolls; index++)
    {
    rollSum += (rand() % sides + 1);
    usleep(15000);
    }

  return rollSum;
}

int HarryPotter::getDefenseRoll() const {
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

int HarryPotter::getArmor() const {
  return this->armor_Value;
}

void HarryPotter::applyDamage(int attack, int defense, int armor){
  int change;

  change = attack - (armor + defense);

  if (change > 0)
    {
    this->strength_Points -= change;
    }
 
  if(this->strength_Points <= 0 && this->ressurrected == false)
    {
    this->strength_Points = 20;
    this->ressurrected = true;
    }
}

int HarryPotter::getStrengthPoints() const {
  return this->strength_Points;
}

std::string HarryPotter::getName() const{
  return this->name;
}
