/**************************************************
 * Author: Kyle De Laurell
 * Date: 1/27/16
 * Description: This is the List Class Source file.
 * ************************************************/
#include "Item.hpp"
#include "List.hpp"
#include <iostream>
#include <string>
#include <iomanip>

//*******************
//default constructor
//******************
List::List(){
   this->arraySize = 4;
   this->numItems = 0;
   this->listArray = new Item[arraySize];
}

//**********
//destructor
//**********
List::~List(){
   delete [] listArray;
}

//************************************************
//gets input for new Item and then adds it to list
//***********************************************
void List::addItemInput(){
  
   //intializes variable needed
   std::string newName;
   std::string newUnit;
   double newNum2Buy;
   double newPrice;

   //gets the input from the user
   //needed to create a new Item
   std::cout << std::endl; 
   std::cin.ignore();
   std::cout << "What is the name of your Item?" << std::endl;
   getline(std::cin, newName);
   std::cout << "What are the units?" << std::endl;
   getline(std::cin, newUnit);
   std::cout << "How many Units do you want to buy??" << std::endl;
   std::cin >> newNum2Buy;
   std::cout << "What is the Unit Price?" << std::endl;
   std::cin >> newPrice;
   
   //adds item to the list 
   addItem(newName, newUnit, newNum2Buy, newPrice);
}

//************************
//adds an item to the list
//***********************
void List::addItem(std::string newName, std::string newUnit, double newNum2Buy, double newPrice){
   
   //adds to the count of items
   this->numItems++;
   
   //intializes variables
   int lastItem = (this->numItems - 1);
   bool foundDouble = false;

   //adds item to the List array
   if(this->numItems > this->arraySize)
      { 
      this->arraySize += 4;
      Item* newArray = new Item[arraySize];
      for(int index = 0; index < (this->numItems - 1); index++)
         {
         newArray[index] = this->listArray[index];
         }
      newArray[numItems - 1] = Item(newName, newUnit, newNum2Buy, newPrice);
      this->listArray = newArray;

       //checks for doubles and deletes item if it is
       for(int index = 0; index < (this->numItems - 1); index++)
          {
          if(this->listArray[lastItem] == this->listArray[index])
          foundDouble = true;
          }
       if (foundDouble)
         {
         std::cout << "Double Found! Item will be deleted from the list." << std::endl;
         deleteItem(lastItem + 1);
         }
       else
         {
         std::cout << this->listArray[this->numItems - 1].getName();
         std::cout << " added to the List." << std::endl;
         }
      }
    else
      {
       this->listArray[this->numItems - 1] = Item(newName, newUnit, newNum2Buy, newPrice);
       
       //checks for doubles and deletes item if it is
       for(int index = 0; index < (this->numItems - 1); index++)
         {
         if(this->listArray[lastItem] == this->listArray[index])
            foundDouble = true;
         }
      if (foundDouble)
         {
         std::cout << "Double Found! Item will be deleted from the list." << std::endl;
         deleteItem(lastItem + 1);
         }
      else
        {
        std::cout << this->listArray[this->numItems - 1].getName(); 
        std::cout << " added to the List." << std::endl;
        }
      }
}

//*********************
//deletes selected item
//*********************
void List::deleteItemInput(){
    
   //intializes variables
   int numOut;

   //displays all items indexed so you can choose which one to delete
   for(int index1 = 0; index1 < this->numItems; index1++)
      {
      std::cout << std::setw(5) << std::left << index1 + 1;
      std::cout << std::setw(16) << std::left << this->listArray[index1].getName() << "   " << this->listArray[index1].getUnits()  << std::endl;
      }

   //asks user which item the would like to delete
   std::cout << "Please enter the number of the Item you would like to delete: " << std::endl;
   std::cin >> numOut;
   
   //deletes item
   deleteItem(numOut);
}

//*******************************
//deletes item
//******************************
void List::deleteItem(int numOut){
   //decreases number of items by one
   this->numItems--;
   
   //intializes variables
   int count = 0;
      //creates temporary dynamic array
      Item* newArray = new Item[this->arraySize];
     
      //stores only items not deleted in temp array 
      for(int index = 0; index < this->arraySize; index++)
         {
         if(index != (numOut - 1))
            {
            newArray[count] = this->listArray[index];
            count++;
            }
         }
      
      //displays which item was deleted
      std::cout << this->listArray[numOut - 1].getName();
      std::cout << " deleted from the List." << std::endl;
      this->listArray = newArray;  
}

//displays the complete list and calculates the total cost
//of all items that will be bought on the list
void List::displayList(){
   //initializes variables needed
   double totalCost = 0;
   
   //displays the entire list and cost of all items on the list
   std::cout << std::endl << "The following is your list information: " << std::endl;
   
   std::cout << std::left << std::setw(16) << "Item Name" << std::setw(16) << "Amount Needed" << std::setw(16) << "Unit Price" << std::right << std::setw(10) << "Total" << std::endl;
   for(int index1 = 0; index1 < this->numItems; index1++)
      {
      std::cout << std::setw(16) << std::left << this->listArray[index1].getName();
      std::cout << std::left << std::setw(3)  << this->listArray[index1].getNum2Buy();
      std::cout << std::setw(1) << " ";
      std::cout << std::left << std::setw(13)  << this->listArray[index1].getUnits();
      std::cout << std::setw(1) << "$"; 
      std::cout << std::setw(5) << std::left;
      std::cout << std::fixed << std::setprecision(2);
      std::cout << this->listArray[index1].getUnitPrice(); 
      std::cout << std::setw(1) << "/";
      std::cout << std::setw(14) << std::left << this->listArray[index1].getUnits();
      std::cout << std::setw(1) << std::left << "$";
      std::cout << std::setw(10) << this->listArray[index1].extendedPrice();
      std::cout << std::endl;
      totalCost += this->listArray[index1].extendedPrice();
      }
   std::cout << std::endl << "Your total cost for all items is $" << totalCost << std::endl;
}

