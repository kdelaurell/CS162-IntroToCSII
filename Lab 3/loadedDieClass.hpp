/***********************************************
 *** Author: Kyle De Laurell
 *** Date: 1/16/2016
 *** Description: loaded DieClass header file
 ************************************************/

#ifndef loadedDieClass_HPP
#define loadedDieClass_HPP
#include "dieClass.hpp"

class loadedDie : public Die
{
   private:
      int weightedSides;
   public:
      loadedDie();
      loadedDie(int numSides);
      int getWeightedSides() const;
      void setWeightedSides(int numSides);
      int loadedRollDie();
};
#endif
