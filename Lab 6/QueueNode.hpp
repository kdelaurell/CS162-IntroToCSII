/************************************************
 * Author: Kyle De Laurell
 * Date: 2/9/16
 * Description: Queue Node header file
 ************************************************/
#ifndef QueueNode_HPP
#define QueueNode_HPP

class QueueNode{
  friend class DynamicQueue;
  private:
    int value;
    QueueNode *next;
    QueueNode *previous;
  public:
    QueueNode(int newNum, QueueNode *nextNum, QueueNode *prevNum){
       this->value = newNum;
       this->next = nextNum;
       this->previous = prevNum;
    };
};

#endif
