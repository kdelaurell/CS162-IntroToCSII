/***********************************************
 *** Author: Kyle De Laurell
 *** Date: 1/16/2016
 *** Description: loaded DieClass source file
 ************************************************/

#include "loadedDieClass.hpp"
#include "dieClass.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

//loaded Die default constructor
loadedDie::loadedDie() : Die()
{
   
   //this->weightedSides = this->sides;
}

//loaded Die constructor with 1 input
loadedDie::loadedDie(int numSides) : Die(1)
{
   this->sides = numSides;
   //this->weightedSides = numSides;
}

//gets the number of sides
int loadedDie::getWeightedSides() const
{   
   return this->sides;
   //return weightedSides;
}


void loadedDie::setWeightedSides(int numSides)
{
   //this->weightedSides = numSides;
}

//loaded dice roll
int loadedDie::loadedRollDie()
{
   //intializes variables
   int roll;
   int randNum;
   randNum = rand();

   //test code
   //std::cout << "RAND: " << randNum << std::endl;

   roll = randNum % this->sides + 1;
   
   //test code
   //std::cout << "before loaded: " << roll << std::endl;
   //std::cout << "sides: " << ((this->sides)/2) << std::endl;
   
   //if the dice is lower than half the die then sets the die 
   //roll to highest possible roll
   if(roll < ((this->sides)/2))
      roll = this->sides;
   
   //returns the roll
   return roll;
}

