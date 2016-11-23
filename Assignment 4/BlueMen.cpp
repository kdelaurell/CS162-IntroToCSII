/************************************************
 * Author: Kyle De Laurell
 * Date: 2/11/16
 * Description: Blue Men Class Source file
 *************************************************/
#include "Creature.hpp"
#include "BlueMen.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

BlueMen::BlueMen(){
  this->attack_Die_Sides = 10;
  this->attack_Die_Rolls = 2;
  this->defense_Die_Sides = 6;
  this->defense_Die_Rolls = 3;
  this->armor_Value = 3;
  this->strength_Points = 12;
  this->name = "Blue Men";
}

int BlueMen::getAttackRoll() const {
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

int BlueMen::getDefenseRoll() const {
  int rollSum = 0;
  int sides;
  int rolls = this->defense_Die_Rolls;

  if(this->strength_Points > 8)
     sides = 3;
  else if(this->strength_Points > 4)
     sides = 2;
  else
     sides = 1;

  for (int index = 0; index < rolls; index++)
    {
    rollSum += (rand() % sides + 1);
    usleep(1500);
    }

  return rollSum;
}
int BlueMen::getArmor() const {
  return this->armor_Value;
}

void BlueMen::applyDamage(int attack, int defense, int armor){
  int change;

  change = attack - (armor + defense);

  if (change > 0)
    {
    this->strength_Points -= change;
    }
}

int BlueMen::getStrengthPoints() const {
  return this->strength_Points;
}

std::string BlueMen::getName() const{
  return this->name;
}

void BlueMen::restore(){
  int restoreNum;
  if(this->strength_Points > 0 && this->strength_Points != 12){
    restoreNum = this->strength_Points;
    restoreNum = (12 - restoreNum) * 0.5;
    this->strength_Points += restoreNum;
  }
}
