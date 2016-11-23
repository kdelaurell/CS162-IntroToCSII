/************************************************
 * Author: Kyle De Laurell
 * Date: 1/27/16
 * Description: Main program that can reverse output
 * a string, calculate the sum of an array, and
 * calculate a triangle number.
 ***********************************************/

#include <iostream>
#include <string>
#include "function.hpp"
using std::cout;
using std::cin;
using std::endl;

int main(){

//intializes variable needed
int menuChoice;
std::string testWord;
int totalNum;
int inputNum;
int sumOfArray;
int numRows;
int totalPins;
int *intArray;

//displays the menu and reads user input
menuChoice = displayMenu();

//validates input and executes menu options
while (menuChoice != 4){
   if (menuChoice == 1)
      {
      cout << "Please enter a word to be reversed." << endl;
      cin >> testWord;
      displayString(testWord);
      }
   else if (menuChoice == 2)
      {
      cout << "How many number do you want in your array?" << endl;
      cin >> totalNum;
      intArray = new int[totalNum];
      for (int index = 0; index < totalNum; index++)
         cin >> intArray[index];
      sumOfArray = sumArray(intArray, totalNum);
      cout << "The Sum of the Array is " << sumOfArray << endl;
      }
   else if (menuChoice == 3)
      {
      cout << "How many rows are in your triangle number?" << endl;
      cin >> numRows;
      totalPins = addRows(numRows);
      cout << "The total number of Pins needed is " << totalPins << endl;
      }
   menuChoice = displayMenu();
}

return 0;
}
