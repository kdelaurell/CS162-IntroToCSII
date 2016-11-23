/************************************************
 * Author: Kyle De Laurell
 * Date: 1/6/2016
 * Description: readMatrix source file
 ***********************************************/

#include "readMatrix.hpp"
#include <iostream>
using namespace std;
void readMatrix(int *ptrArray, int squareSize)
{  
      cout << "Please enter " << squareSize << " integers: " << endl;
      for(int index = 0; index < squareSize; index++)
         cin >> ptrArray[index];       
}
