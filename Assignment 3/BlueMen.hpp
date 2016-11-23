/************************************************
 * Author:Kyle De Laurell
 * Date: 2/11/16
 * Description: Blue Men Class Header file
 ***********************************************/

#ifndef BlueMen_HPP
#define BlueMen_HPP
#include <string>
#include "Creature.hpp"

class BlueMen : public Creature{

private:
  int attack_Die_Sides;
  int attack_Die_Rolls;
  int defense_Die_Sides;
  int defense_Die_Rolls;
  int armor_Value;
  int strength_Points;
  std::string name;

public:
  BlueMen();
  virtual int getAttackRoll() const;
  virtual int getDefenseRoll() const;
  virtual int getArmor() const;
  virtual void applyDamage(int, int, int);
  virtual int getStrengthPoints() const;
  virtual std::string getName() const;
};

#endif
