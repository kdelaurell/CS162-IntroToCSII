#include "StackNode.hpp"
#include "DynamicStack.hpp"

StackNode(int num, StackNode *next1 = NULL){
  value = num;
  *next = next1;
}
