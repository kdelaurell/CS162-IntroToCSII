/************************************************
 * Author: Kyle De Laurell
 * Date: 1/6/2015
 * Description: determinant source file
 ***********************************************/

#include "determinant.hpp"

int determinant(int *array, int squareSize)
   {
   int det;
   //decides what size the matrix is and then calculates the 
   //determinant based on that
   if(squareSize == 4)
      {
      det = (array[0])*(array[3])-(array[1])*(array[2]);
      }
   else
      {
      det =(array[0])*(array[4]*array[8])-(array[5]*array[7])-
      (array[1])*((array[3]*array[8])-(array[5]*array[6]))+
      (array[2])*((array[3]*array[7])-(array[4]*array[6]));
      }
   return det;
   }
