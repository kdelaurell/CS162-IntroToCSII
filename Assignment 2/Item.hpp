/************************************************
 * Author: Kyle De Laurell
 * Date: 1/27/16
 * Description: This is the Item Class Header file.
 ***********************************************/
#ifndef Item_HPP
#define Item_HPP

#include <string>

class Item{

protected:
   std::string itemName;
   std::string unit;
   double num2Buy;
   double unitPrice;

public:
   Item();
   Item(std::string iN, std::string u, double N2B, double uP);
   double extendedPrice();
   std::string getName();
   std::string getName() const;
   std::string getUnits();
   double getNum2Buy();
   double getUnitPrice();
   friend bool operator== (Item LHS, Item RHS);
};

#endif
