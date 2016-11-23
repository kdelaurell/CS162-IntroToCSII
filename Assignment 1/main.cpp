/***********************************************
 * Author: Kyle De Laurell
 * Date: 1/13/16
 * Description: This is the main file for the 
 * Game of Life.
 ***********************************************/
#include <iostream>
#include "arrayFunctions.hpp"

using namespace std;

int main()
{
   //intializes variables and arrays needed
   int gOLArray[NUMROWS][NUMCOLS];
   int changeArray[NUMROWS][NUMCOLS];
   int shape;
   int startCol;
   int startRow;
   //gathers required starting information
   shape = menu();
   startCol = getCol();
   startRow = getRow();
   initializeArray(gOLArray, shape, startRow, startCol); 
   //animates game for user enjoyment  
   displayArray(gOLArray); 
   for(int n = 0; n < 120; n++)
   {
   makeChanges(gOLArray, *changeArray);
   copyArray(*gOLArray, *changeArray);
   displayArray(gOLArray);
   clearArray();      
   }
   displayArray(gOLArray);
   return 0;
}
