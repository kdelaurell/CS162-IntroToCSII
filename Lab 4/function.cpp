/************************************************
 * Author: Kyle De Laurell
 * Date: 1/30/16
 * Description: function source file
 ***********************************************/
#include "function.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;

//prints out string backwards
void displayString(std::string rW){

   int length = rW.length();

   cout << rW.at(length - 1) << endl;

   if (length != 1)
      {
      rW.erase(length - 1, 1);
      displayString(rW);
      }
}

//sums the array
int sumArray(int *array, int total){
   //sums the array
   if (total == 1)
      return array[total - 1];
   else
      return array[total - 1] + sumArray(array, (total - 1));
}

//calculates the number of pins needed for a certain number of rows
int addRows(int rows){
   //add rows
   if(rows == 1)
      return rows;
   else
      return rows + addRows(rows - 1);
}


//displays menu options
int displayMenu(){
   //intializes variable
   int choice;
  
   //displays menu options
   cout << endl << endl;
   cout << "Please Select from the following options: " << endl;
   cout << "Enter the number associated with your choice." << endl;
   cout << "1. Print a word or phrase backwards" << endl;
   cout << "2. Calculate the sum of an array of integers" << endl;
   cout << "3. Calculate a triangle number for N rows" << endl;
   cout << "4. Exit Program" << endl;
   cin >> choice;
   
   //validates input before returning
   while(choice < 1 || choice > 4)
      {
      cout << "Invalid Choice! Please re-enter with a valid number." << endl;
      cin >> choice;
      }
   
   return choice;
}
