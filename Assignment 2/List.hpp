/************************************************
 ** Author: Kyle De Laurell
 ** Date: 1/27/16
 ** Description: This is the List Class Header file.
 ************************************************/
#ifndef List_HPP
#define List_HPP
#include "Item.hpp"

class List : public Item{
  
   private: 
      Item* listArray;
      int arraySize;
      int numItems;

   public:
      List();
      ~List();
      void addItemInput();
      void addItem(std::string newName, std::string newUnit, double newNum2Buy, double newPrice);
      void deleteItemInput();
      void deleteItem(int numOut);
      void displayList();
};


#endif
