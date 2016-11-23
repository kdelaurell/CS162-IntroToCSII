/***********************************************
 * Author: Kyle De Laurell
 * Date: 1/16/2016
 * Description: DieClass source file
 **********************************************/
#include "dieClass.hpp"
#include <ctime>
#include <cstdlib>

//die class default constructor
Die::Die()
{
   this->sides = 0;
}
 
//die class constructor for 1 input
Die::Die(int numSides)
{
   this->sides = numSides;
}

//gets the number of sides
int Die::getSides() const
{
   return this->sides;
}

//sets the number of sides
void Die::setSides(int numSides)
{
   this->sides = numSides;
}

//rolls the die
int Die::rollDie()
{
   int roll;
   int randNum;
   srand(time(NULL));
   randNum = rand();
   roll = randNum % (this->sides) + 1;
   return roll;
}

