/************************************
 * Author: Kyle De Laurell
 * Date: 2/4/16
 * Description: main function header file
 ***********************************/

#ifndef mainFunctions_HPP
#define mainFunctions_HPP
#include "Critters.hpp"
#include "Ant.hpp"
#include "Doodlebug.hpp"

void displayField(Critters**, int, int);
void displayArray(Critters**, int, int);
void copyArray(Critters**, Critters**, int, int);
void clearArray(Critters**);
void initializeArray(Critters**, int, int);
#endif
