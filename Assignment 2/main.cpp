/************************************************
 * Author: Kyle De Laurell
 * Date: 1/27/16
 * Description: Main program for the List and Item
 * program.
 ************************************************/


#include "Item.hpp"
#include "List.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;

int main(){

//creates new list
List b;

//intializes variables needed
int choice;

//displays the menu for the program and
//calls functions based on menu choice
do{
cout << "would you like to: " << std::endl;
cout << "1 - add a new item" << std::endl;
cout << "2 - delete an item" <<std::endl;
cout << "3 - display list and current cost" << std::endl;
cout << "4 - complete list and print final list" << std::endl;
cin >> choice;

if(choice == 1)
   b.addItemInput();
else if (choice == 2)
   b.deleteItemInput();
else if (choice == 3)
   b.displayList();

}while(choice == 1 || choice == 2 || choice == 3);

//displays the final list and cost
b.displayList();

  return 0;
}
