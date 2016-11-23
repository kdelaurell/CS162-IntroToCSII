/******************************************************************** 
*Author: Kyle De Laurell
*Date: 2/2/16
*Description: This is the Doodlebug Class source file.
*********************************************************************/
#include "Doodlebug.hpp"
#include "Ant.hpp"
#include "Critters.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

//default constructor
Doodlebug::Doodlebug(){
this->steps_Alive = 0;
this->name = "Doodlebug";
this->lastEaten = 0;
}

//destructor
Doodlebug::~Doodlebug(){
   //std::cout << "DEAD!";
}

void Doodlebug::Move(Critters** tempArray, Critters** origArray, int row, int col, int maxRow, int maxCol) const {
   //increments steps alive
   tempArray[row*maxCol+col]->incrementSteps_Alive();

   if(tempArray[(row + 1)*maxCol+col] != 0 && (row + 1) != maxRow && tempArray[(row + 1)*maxCol+col]->getName() == "Ant")
      {
      tempArray[row*maxCol+col]->setLastEaten();
      tempArray[(row + 1)*maxCol+col] = tempArray[row*maxCol+col];
      tempArray[row*maxCol+col] = NULL;
      }  
   else if(tempArray[(row - 1)*maxCol+col] != 0 && (row - 1) != -1 && tempArray[(row - 1)*maxCol+col]->getName() == "Ant")
      {  
      tempArray[row*maxCol+col]->setLastEaten();
      tempArray[(row - 1)*maxCol+col] = tempArray[row*maxCol+col];
      tempArray[row*maxCol+col] = NULL; 
      }
   else if(tempArray[row*maxCol+(col + 1)] != 0 && (col + 1) != maxRow && tempArray[row*maxCol+(col + 1)]->getName() == "Ant")
      {
      tempArray[row*maxCol+col]->setLastEaten();
      tempArray[row*maxCol+(col + 1)] = tempArray[row*maxCol+col];
      tempArray[row*maxCol+col] = NULL;
      }
   else if(tempArray[row*maxCol+(col - 1)] != 0 && (col - 1) != -1 && tempArray[row*maxCol+(col - 1)]->getName() == "Ant")
      {
      tempArray[row*maxCol+col]->setLastEaten();
      tempArray[row*maxCol+(col - 1)] = tempArray[row*maxCol+col];
      tempArray[row*maxCol+col] = NULL;
      }
   else
      Ant::Move(tempArray, origArray, row, col, maxRow, maxCol);
}

void Doodlebug::Breed(Critters** mainArray, int row, int col, int maxRow, int maxCol){
 if(this->steps_Alive % 8 == 0)
    {
    bool reproduced = false;
    if(mainArray[(row - 1)*maxCol+col] == 0 && (row - 1) != -1)
       {
       mainArray[(row - 1)*maxCol+col] = new Doodlebug();
       reproduced = true;
       }
    else if(mainArray[(row + 1)*maxCol+col] == 0 && (row + 1) != maxRow)
       {
       mainArray[(row + 1)*maxCol+col] = new Doodlebug();
       reproduced = true;
       }
    else if(mainArray[row*maxCol+(col - 1)] == 0 && (col - 1) != -1)
       {
       mainArray[row*maxCol+(col - 1)] = new Doodlebug();
       reproduced = true;
       }
    else if(mainArray[row*maxCol+(col + 1)] == 0 && (col + 1) != maxCol)
       {
       mainArray[row*maxCol+(col + 1)] = new Doodlebug();
       reproduced = true;
       }
    if(!reproduced)
       this->steps_Alive--;
    }
}

void Doodlebug::Starve(Critters** mainArray, int row, int col, int maxRow, int maxCol){
   if((this->steps_Alive - this->lastEaten) == 3)
      mainArray[row*maxCol+col] = NULL;
}

void Doodlebug::setLastEaten(){
   this->lastEaten = this->steps_Alive;
}

int Doodlebug::getSteps_Alive() const{
   return this->steps_Alive;
}

void Doodlebug::incrementSteps_Alive(){
   this->steps_Alive++;
}

std::string Doodlebug::getName() const{
   return this->name;
}
