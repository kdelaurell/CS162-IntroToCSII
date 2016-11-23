/*********************************************************************************
 * *Author: Kyle De Laurell
 * *Date: 2/2/16
 * *Description: This is the Ant Class source file.
 * **********************************************************************************/
#include "Ant.hpp"
#include "Critters.hpp"
#include <iostream>
#include <cstdlib>
#include <string>
//default constructor
Ant::Ant(){
this->steps_Alive = 0;
this->name = "Ant";
}

//destructor
Ant::~Ant(){
   std::cout << "DEAD!";
}

//Moves the ants randomly
void Ant::Move(Critters** tempArray, Critters** origArray, int row, int col, int maxRow, int maxCol) const{
  
  int randNum;

     tempArray[row*maxCol+col]->getSteps_Alive();
     randNum = rand() % 4 + 1;
     
     if(randNum == 1)
        {
        if((col + 1) != maxCol)
           {
           if(tempArray[row*maxCol+(col + 1)] == 0)
             {
             tempArray[row*maxCol+(col + 1)] = tempArray[row*maxCol+col];
             tempArray[row*maxCol+col] = NULL;
             }
           }
        }
     if(randNum == 2)
        {
        if((col - 1) != -1)
           {
           if(tempArray[row*maxCol+(col - 1)] == 0)
              {
              tempArray[row*maxCol+(col - 1)] = tempArray[row*maxCol+col];
              tempArray[row*maxCol+col] = NULL;
              }
           }
        }
     if(randNum == 3)
        {
        if((row + 1) != maxRow)
           {
           if(tempArray[(row + 1)*maxCol+col] == 0)
              {
              tempArray[(row + 1)*maxCol+col] = tempArray[row*maxCol+col];
              tempArray[row*maxCol+col] = NULL;
              }
           }
        }
     if(randNum == 4)
        {
        if((row - 1) != -1)
           {
           if(tempArray[(row - 1)*maxCol+col] == 0)
              {
              tempArray[(row - 1)*maxCol+col] = tempArray[row*maxCol+col];
              tempArray[row*maxCol+col] = NULL;
              }
           }
        }

   
}

//Breed function
void Ant::Breed(Critters** mainArray, int row, int col, int maxRow, int maxCol){
 if(this->steps_Alive % 3 == 0)
    {
    bool reproduced = false;
    if(mainArray[(row - 1)*maxCol+col] == 0 && (row - 1) != -1)
       {
       mainArray[(row - 1)*maxCol+col] = new Ant();
       reproduced = true;
       }
    else if(mainArray[(row + 1)*maxCol+col] == 0 && (row + 1) != maxRow)
       {
       mainArray[(row + 1)*maxCol+col] = new Ant();
       reproduced = true;
       }
    else if(mainArray[row*maxCol+(col - 1)] == 0 && (col - 1) != -1)
       {
       mainArray[row*maxCol+(col - 1)] = new Ant();
       reproduced = true;
       }
    else if(mainArray[row*maxCol+(col + 1)] == 0 && (col + 1) != maxCol)
       {
       mainArray[row*maxCol+(col + 1)] = new Ant();
       reproduced = true;
       }
    if(!reproduced)
       this->steps_Alive--;
    } 
}

void Ant::setLastEaten(){
}

void Ant::Starve(Critters** mainArray, int row, int col, int maxRow, int maxCol){
} 

int Ant::getSteps_Alive() const{
   return this->steps_Alive;
}

void Ant::incrementSteps_Alive(){
   this->steps_Alive++;
}

std::string Ant::getName() const{
   return this->name;
}
