/************************************************
 * Author: Kyle De Laurell
 * Date: 2/11/16
 * Description: Barbarian Class Source file
 ************************************************/
#include "Creature.hpp"
#include "Barbarian.hpp"
#include <cstdlib>
#include <iostream>
Barbarian::Barbarian(){
  this->attack_Die_Sides = 6;
  this->attack_Die_Rolls = 2;
  this->defense_Die_Sides = 6;
  this->defense_Die_Rolls = 2;
  this->armor_Value = 0;
  this->strength_Points = 12;
  this->name = "Barbarian";
}

int Barbarian::getAttackRoll() const {
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

int Barbarian::getDefenseRoll() const {
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

int Barbarian::getArmor() const {
  return this->armor_Value;
}

void Barbarian::applyDamage(int attack, int defense, int armor){
  int change;

  change = attack - (armor + defense);

  if (change > 0)
    {
    this->strength_Points -= change;
    }
}

int Barbarian::getStrengthPoints() const {
  return this->strength_Points;
}

std::string Barbarian::getName() const{
  return this->name;
}

void Barbarian::restore(){
  int restoreNum;
  if(this->strength_Points > 0 && this->strength_Points != 12){
    restoreNum = this->strength_Points;
    restoreNum = (12 - restoreNum) * 0.5;
    this->strength_Points += restoreNum;
  }
}
