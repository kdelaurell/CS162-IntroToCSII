/**************************************************
*Author: Kyle De Laurell
*Date: 2/2/16
*Description:  Ant Header file
***************************************************/

#ifndef Ant_HPP
#define Ant_HPP
#include "Critters.hpp"
#include <string>

class Ant : public Critters{

private:
  int steps_Alive;
  std::string name;
  int lastEaten;
public:
  Ant();
  ~Ant();
  virtual void Move(Critters**, Critters**, int, int, int, int) const;
  virtual void Breed(Critters**, int, int, int, int);
  virtual void Starve(Critters**, int, int, int, int);
  virtual void setLastEaten();
  virtual int getSteps_Alive() const;
  virtual void incrementSteps_Alive();
  virtual std::string getName() const;
};

#endif
