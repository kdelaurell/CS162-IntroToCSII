/************************************************
 * Author:Kyle De Laurell
 * Date: 2/11/16
 * Description: Barbarian Class Header file
 ************************************************/
#ifndef Barbarian_HPP
#define Barbarian_HPP
#include <string>
#include "Creature.hpp"

class Barbarian : public Creature{

private:
  int attack_Die_Sides;
  int attack_Die_Rolls;
  int defense_Die_Sides;
  int defense_Die_Rolls;
  int armor_Value;
  int strength_Points;
  std::string name;

public:
  Barbarian();
  virtual int getAttackRoll() const;
  virtual int getDefenseRoll() const;
  virtual int getArmor() const;
  virtual void applyDamage(int, int, int);
  virtual int getStrengthPoints() const;
  virtual std::string getName() const;
};

#endif
