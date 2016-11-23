/************************************************
 * Author: Kyle De Laurell
 * Date: 2/11/16
 * Description: Creature Class header file
 ***********************************************/

#ifndef Creature_HPP
#define Creature_HPP
#include <string>

class Creature{

private:
  int attack_Die_Sides;
  int attack_Die_Rolls;
  int defense_Die_Sides;
  int defense_Die_Rolls;
  int armor_Value;
  int strength_Points;
  bool ressurrected;
  std::string name;

public:
  Creature();
  virtual int getAttackRoll() const;
  virtual int getDefenseRoll() const;
  virtual int getArmor() const;
  virtual void applyDamage(int, int, int);
  virtual int getStrengthPoints() const;
  virtual std::string getName() const;
  virtual void restore();
};

#endif
