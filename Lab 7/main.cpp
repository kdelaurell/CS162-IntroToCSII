/**************************************
 * Author: Kyle De Laurell
 * Date: 2/19/16
 * Description: main program file
 *************************************/
#include <iostream>
#include <fstream>
#include "mainFunctions.hpp"
#include "searchSortFunctions.hpp"

using std::cout;
using std::cin;
using std::endl;

int main(){
  int choice;
  int sortArray[20];
  choice = menu();

  while(choice != 4)
  {
    if (choice == 1)
      {
      searchFile();
      }
    else if (choice == 2)
      {
      sortFile();
      }
    else if (choice == 3)
      {
      binarySearchFile();
      }
  choice = menu();
  }

  return 0;
}
