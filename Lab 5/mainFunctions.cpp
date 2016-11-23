
/************************************
 * Author: Kyle De Laurell
 * Date: 2/4/16
 * Description: main function source file
 ************************************/
#include "mainFunctions.hpp"
#include "Critters.hpp"
#include "Ant.hpp"
#include <iostream>

void displayField(Critters** mainArray, int rows, int cols){
int index1;
int index2;
std::string pOut;

for (index1 = 0; index1 < rows; index1++)
   {
   for (index2 = 0; index2 < cols; index2++)
      {
      if(mainArray[index1*cols+index2] == 0)
         pOut = ".";
      else
         {
         if(mainArray[index1*cols+index2]->getName() == "Doodlebug") 
            pOut = "X";
         else
            pOut = "O";
         }
      std::cout << pOut << "  ";
      }
   std::cout << std::endl;
   }

}

void displayArray(Critters** mainArray, int rows, int cols){

int index1;
int index2;
std::string pOut;

for (index1 = 19; index1 < rows; index1++)
   {
   for (index2 = 19; index2 < cols; index2++)
      {
      if(mainArray[index1*cols+index2] == 0)
         pOut = ".";
      else
         {
         if(mainArray[index1*cols+index2]->getName() == "Doodlebug")
            pOut = "X";
         else
            pOut = "O";
         }
      std::cout << pOut << mainArray[index1*cols+index2] << "  " << mainArray[index1*cols+index2]->getName() << mainArray[index1*cols+index2]->getName();
      }
   std::cout << std::endl;
   }

}


void copyArray(Critters** oldArray, Critters** newArray, int rows, int cols){
int index1;
int index2;

for(index1 = 0; index1 < rows; index1++)
   {
   for(index2 = 0; index2 < cols; index2++)
      newArray[index1*cols+index2] = oldArray[index1*cols+index2];
   }
}

void clearArray(Critters** clearedArray){
 
  delete [] clearedArray;
}

void initializeArray(Critters** newArray, int num_Rows, int num_Cols){
int index1;
int index2;

std::cout << num_Rows << " " << num_Cols << std::endl;
//intializes Array    
 newArray = new Critters*[num_Rows * num_Cols];

//sets array to NULL
 for(index1 = 0; index1 < num_Rows; index1++)
     {
     for (index2 = 0; index2 < num_Cols; index2++)
        newArray[index1*20+index2] = NULL;
     }

   
}
