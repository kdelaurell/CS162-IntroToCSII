/************************************
 ** Author: Kyle De Laurell
 ** Date: 2/4/16
 ** Description: Critters class header file
 ************************************/
#ifndef Critters_HPP
#define Critters_HPP
#include <string>

class Critters{

protected:
  int steps_Alive;
  std::string name;
  int lastEaten;
public:
  Critters();
  virtual void Move(Critters**, Critters**, int, int, int, int) const;
  virtual void Breed(Critters**, int, int, int, int);
  virtual void Starve(Critters**, int, int, int, int);
  virtual int getSteps_Alive() const;
  virtual void incrementSteps_Alive();
  virtual void setLastEaten();
  virtual std::string getName() const;
};

#endif
