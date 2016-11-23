/************************************************
 * Author: Kyle De Laurell
 * Date: 1/21/16
 * Description: Die Class header file
 ***********************************************/

#ifndef dieClass_HPP
#define dieClass_HPP

class Die
{
   protected:
      int sides;
   
   public:
      Die();
      Die(int numSides);
      int getSides() const;
      void setSides(int numSides);
      int rollDie();
};

#endif
