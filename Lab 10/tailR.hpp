#ifndef tailR_HPP
#define tailR_HPP

unsigned long rfactorial (unsigned long n) {
  if(n == 1)
    return 1;
  else
    return n * rfactorial(n - 1);
}

unsigned long factorialHelper(unsigned long n, unsigned long result){
  if (n == 1)
    return result;
  else
    return factorialHelper(n - 1, n * result);
}

unsigned long factorial(unsigned long n){
  return factorialHelper(n , 1);
}
#endif
