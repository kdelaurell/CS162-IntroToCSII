/************************************************
 * Author: Kyle De Laurell
 * Date: 1/27/16
 * Description: This is the Item Class source file.
 ************************************************/
#include "Item.hpp"
#include <iostream>
#include <string>

//default constructor
Item::Item(){

this->itemName = "";
this->unit = "";
this->num2Buy = 0;
this->unitPrice = 0;
}

//constructor for 4 inputs for Item class
Item::Item(std::string iN, std::string u, double N2B, double uP){
   
   this->itemName = iN;
   this->unit = u;
   this->num2Buy = N2B;
   this->unitPrice = uP;
}

//calculates the extended price
double Item::extendedPrice(){
   return ((this->num2Buy) * this->unitPrice);
}

//grabs the Item Name
std::string Item::getName(){
   return this->itemName;
}

std::string Item::getName() const{
   return this->itemName;
}
//grabs the units
std::string Item::getUnits(){
   return this->unit;
}

//grabs the amount the user wants to buy
double Item::getNum2Buy(){
   return this->num2Buy;
}

//returns the unit Price
double Item::getUnitPrice(){
   return this->unitPrice;
}

//operator overloaded to determine items that are the same
bool operator== (Item LHS, Item RHS){
   if(LHS.getName() == RHS.getName())
      {
      if (LHS.getUnits() == RHS.getUnits())
          return true;
      else
          return false;
      }
    else
       return false;
}
