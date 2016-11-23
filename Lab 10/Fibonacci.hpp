/********
* Author : Sams Teach Yourself C++ Page 150
********/

#ifndef Fibonacci_HPP
#define Fibonacci_HPP
int GetFibNumber(int FibIndex)
{
    if(FibIndex < 2 )
        return FibIndex;
    else
        return GetFibNumber(FibIndex - 1) + GetFibNumber(FibIndex - 2);
}

int GetFibNumberNR(int FibIndex)
{
  int first =0;
  int second=1;
  int counter=2;
  while(counter < FibIndex)
  {
      int temp=second;
      second=first+second;
      first=temp;
      ++counter;
  }
  if(FibIndex==0)
      return 0;
  else
      return first+second;
}

#endif
