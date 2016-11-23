/************************************************
 * Author: Kyle De Laurell
 * Date: 2/9/16
 * Description: Dynamic Stack header file
 ************************************************/

#ifndef DynamicStack_HPP
#define DynamicStack_HPP
#include "Node.hpp"

class DynamicStack{
private:
    Node *top;

public:
  DynamicStack();
  void add(int);
  int remove(); 
};

#endif
