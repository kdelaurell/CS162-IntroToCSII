/************************************************
 * Author: Kyle De Laurell
 * Date: 2/9/16
 * Description: Dynamic Queue header file
 ************************************************/

#ifndef DynamicQueue_HPP
#define DynamicQueue_HPP
#include "QueueNode.hpp"

class DynamicQueue{
private:
    QueueNode *front;
    QueueNode *back;

public:
  DynamicQueue();
  void add(int);
  int remove();
};

#endif
