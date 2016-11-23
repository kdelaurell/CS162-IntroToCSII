/************************************************
 * Author: Kyle De Laurell
 * Date: 2/11/16
 * Description: Vampire Class Source file
 *************************************************/
#include "Creature.hpp"
#include "Vampire.hpp"
#include <string>
#include <cstdlib>
#include <iostream>
Vampire::Vampire(){
  this->attack_Die_Sides = 12;
  this->attack_Die_Rolls = 1;
  this->defense_Die_Sides = 6;
  this->defense_Die_Rolls = 1;
  this->armor_Value = 1;
  this->strength_Points = 18;
  this->name = "Vampire";
}

int Vampire::getAttackRoll() const {
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

int Vampire::getDefenseRoll() const {
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

int Vampire::getArmor() const {
  return this->armor_Value;
}

void Vampire::applyDamage(int attack, int defense, int armor){
  int change;
  int charm;

  charm = (rand() % 2);

  if(!charm)
    {
    change = attack - (armor + defense);

    if (change > 0)
      {
      this->strength_Points -= change;
      }
    }
}

int Vampire::getStrengthPoints() const {
  return this->strength_Points;
}

std::string Vampire::getName() const{
  return this->name;
}

void Vampire::restore(){
  int restoreNum;
  if(this->strength_Points > 0 && this->strength_Points != 18){
    restoreNum = this->strength_Points;
    restoreNum = (18 - restoreNum) * 0.5;
    this->strength_Points += restoreNum;
  }
}
