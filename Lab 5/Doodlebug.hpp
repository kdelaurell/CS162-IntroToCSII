/************************************
 ** Author: Kyle De Laurell
 ** Date: 2/4/16
 ** Description: Doodlebug class header file
 ************************************/
#ifndef Doodlebug_HPP
#define Doodlebug_HPP
#include "Critters.hpp"
#include "Ant.hpp"
#include <string>

class Doodlebug : public Ant{

private:
  int steps_Alive;
  std::string name;
  int lastEaten;
public:
  Doodlebug();
  ~Doodlebug();
  virtual void Move(Critters**, Critters**, int, int, int, int) const;
  virtual void Breed(Critters**, int, int, int, int);
  virtual void Starve(Critters**, int, int, int, int);
  virtual void setLastEaten();
  virtual int getSteps_Alive() const;
  virtual void incrementSteps_Alive();
  virtual std::string getName() const;
};

#endif   
