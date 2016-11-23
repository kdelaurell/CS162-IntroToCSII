/***********************************
* Author: Kyle De Laurell
* Date: 3/4/16
* Description: Queue header file
***********************************/

#ifndef QueueClass_HPP
#define QueueClass_HPP
#include <queue>
class Queue{
private:
  std::queue <int> myQueue;

public:
  Queue();
  void addNumber(int);
  void removeNumber();
  int getSize();

};


#endif
