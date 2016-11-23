#include "DynamicQueue.hpp"
#include "QueueNode.hpp"
#include "DynamicStack.hpp"
#include "Node.hpp"
#include <iostream>
using std::cout;
using std::endl;

int main(){
  DynamicQueue stack;

  int catchVar;

  stack.add(1);
  stack.add(2);
  stack.add(3);

  catchVar = stack.remove();
  cout << "Number 1: " << catchVar << endl;

  catchVar = stack.remove();
  cout << "Number 2: " << catchVar << endl;

  catchVar = stack.remove();
  cout << "Number 3: " << catchVar << endl;

  stack.remove();
 


  DynamicStack stackt;

  //int catchVar;

  stackt.add(1);
  stackt.add(2);
  stackt.add(3);

  catchVar = stackt.remove();
  cout << "Number 1: " << catchVar << endl;

  catchVar = stackt.remove();
  cout << "Number 2: " << catchVar << endl;

  catchVar = stackt.remove();
  cout << "Number 3: " << catchVar << endl;

  stackt.remove();


  return 0; 


}
