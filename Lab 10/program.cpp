#include <iostream>
#include <iomanip>
#include <ctime>
#include <time.h>
#include "Fibonacci.hpp"
#include "mainFunctions.hpp"
#include "tailR.hpp"
using std::cout;
using std::endl;
using std::cin;

int main()
{
    timespec recursiveTime1;
    timespec recursiveTime2;
    timespec nonrecursiveTime1;
    timespec nonrecursiveTime2;
    timespec tailTime1;
    timespec tailTime2;
    timespec tailTimeR1;
    timespec tailTimeR2;

    cout << " Enter 0 based index of desired Fibonacci Number: ";
    int Index = 0;
    cin >> Index;

    cout << " Enter factorial you want: ";
    int Index1 = 0;
    cin >> Index1;

    clock_gettime(CLOCK_REALTIME, &recursiveTime1);
    cout << endl << "Fibonacci number is: " << GetFibNumber(Index) << endl;
    clock_gettime(CLOCK_REALTIME, &recursiveTime2);

    clock_gettime(CLOCK_REALTIME, &nonrecursiveTime1);
    cout << "Fibonacci number is: " << GetFibNumberNR(Index) << endl << endl;
    clock_gettime(CLOCK_REALTIME, &nonrecursiveTime2);

    clock_gettime(CLOCK_REALTIME, &tailTime1);
    cout << "Tail Recursive Factorial: " << factorial(Index1) << endl;
    clock_gettime(CLOCK_REALTIME, &tailTime2);

    clock_gettime(CLOCK_REALTIME, &tailTimeR1);
    cout << "Non-Tail Recursive Factorial: " << rfactorial(Index1) << endl << endl;
    clock_gettime(CLOCK_REALTIME, &tailTimeR2);

    cout << "Recursive Time: " << diff(recursiveTime1, recursiveTime2).tv_sec << ":" << diff(recursiveTime1, recursiveTime2).tv_nsec << endl;
    cout << "Non-Recursive Time: " << diff(nonrecursiveTime1, nonrecursiveTime2).tv_sec << ":" << diff(nonrecursiveTime1, nonrecursiveTime2).tv_nsec << endl << endl;
    cout << "Tail Recursive Time: " << diff(tailTime1, tailTime2).tv_sec << ":" << diff(tailTime1, tailTime2).tv_nsec << endl;
    cout << "Non-Tail Recursive Time: " << diff(tailTimeR1, tailTimeR2).tv_sec << ":" << diff(tailTimeR1, tailTimeR2).tv_nsec << endl;
    return 0;

}
