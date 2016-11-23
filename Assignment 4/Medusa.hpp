/************************************************
* Author: Kyle De Laurell
* Date: 2/11/16
* Description: Medusa Class header file
***********************************************/

#ifndef Medusa_HPP
#define Medusa_HPP
#include <string>
#include "Creature.hpp"

class Medusa : public Creature{

private:
  int attack_Die_Sides;
  int attack_Die_Rolls;
  int defense_Die_Sides;
  int defense_Die_Rolls;
  int armor_Value;
  int strength_Points;
  std::string name;

public:
  Medusa();
  virtual int getAttackRoll() const;
  virtual int getDefenseRoll() const;
  virtual int getArmor() const;
  virtual void applyDamage(int, int, int);
  virtual int getStrengthPoints() const;
  virtual std::string getName() const;
  virtual void restore();
};

#endif
