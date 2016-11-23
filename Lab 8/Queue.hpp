/************************************************
 * Author: Kyle De Laurell
 * Date: 2/9/16
 * Description: Dynamic Queue header file
 ************************************************/

#ifndef DynamicQueue_HPP
#define DynamicQueue_HPP
#include "QueueNode.hpp"

class Queue{
private:
    QueueNode *front;
    QueueNode *back;

public:
  Queue();
  ~Queue();
  void addBack(int);
  void removeFront();
  int getFront();
};

#endif
