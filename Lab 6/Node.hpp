/************************************************
 * Author: Kyle De Laurell
 * Date: 2/9/16
 * Description: Node header file
 ***********************************************/
#ifndef Node_HPP
#define Node_HPP

class Node{
  friend class DynamicStack;
  private:
    int value;
    Node *next;
  public:
    Node(int newNum, Node *nextNum){
       this->value = newNum;
       this->next = nextNum;
    };
    int getValue(){
      return this->value;
    };
    Node* getNext(){
      return this->next;
    };

};

#endif
