/************************************************
 * Author: Kyle De Laurell
 * Date: 1/6/2016
 * Description: This is the Main file for entering
 * a Matrix and outputting a determinant.
 ***********************************************/


#include <iostream>
#include <cmath>
#include <iomanip>
#include "determinant.hpp"
#include "readMatrix.hpp"
using namespace std;

int main()
{
   //declared all variables
   int matrixSize;
   int rowCol;
   int det1;
   int index1;
   int index2;

   //asks user for input on matrix size
   cout << "Would you like to create a 2x2 matrix (enter 4) or" << endl;
   cout << "3x3 matrix (enter 9): ";
   cin >> matrixSize;

   //takes user input and creates an array
   rowCol = sqrt(matrixSize);
   int array[rowCol][rowCol];
  
   //these two functions get the matrix and then calculate the determinant
   readMatrix(*array, matrixSize);
   det1 = determinant(*array, matrixSize);

   cout << "Your matrix is:" << endl;
   //loop that outputs the matrix entered by user
   //and then outputs the determinant of that matrix
   for(index1 = 0; index1 < rowCol; index1++)
      {
      for(index2 = 0; index2 < rowCol; index2++)
         {
         cout << setw(6) << array[index1][index2] << "  ";
         }
      cout << endl;
      }
   cout << "The determinant is " << det1 << endl;

   return 0;
}
