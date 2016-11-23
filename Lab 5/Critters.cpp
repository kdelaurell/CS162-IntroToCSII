/*********************************************************************************
 **Author: Kyle De Laurell
 **Date: 2/2/16
 **Description: This is the Critters Class source file.
 ***********************************************************************************/
#include <iostream>
#include <string>
#include "Ant.hpp"
#include "Critters.hpp"
//default constructor
Critters::Critters(){
this->steps_Alive = 0;
this->name = "Critters";
}


//Randomnly moves an ant
void Critters::Move(Critters** crArray, Critters** mainArray, int row, int col, int maxRow, int maxCol) const{
std::cout << "Critters Move" << std::endl;
}

//Breed function
void Critters::Breed(Critters** mainArray, int row, int col, int maxRow, int maxCol){
std::cout << "Critters Breed" << std::endl;

}

//starve function
void Critters::Starve(Critters** mainArray, int row, int col, int maxRow, int maxCol){

}

//placeholder
void Critters::setLastEaten(){
}

//gets length of life
int Critters::getSteps_Alive() const{
std::cout << "Critters Alive Count" << std::endl;
return this->steps_Alive;
}

//increments how long living
void Critters::incrementSteps_Alive(){

}

//returns type
std::string Critters::getName() const{
   return this->name;
}
