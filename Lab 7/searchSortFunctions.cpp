/********************************
 * Author: Kyle De Laurell
 * Date: 2/19/16
 * Description: searchSortFunctions
 * source File
 * *********************************/
#include "searchSortFunctions.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

/***************************************
 * Description: Linear Search Program
 * Found on page 596 of the textbook.
 *************************************/
void searchFile(){
  ifstream inputFile;
  int testNum;
  int index;
  int indexCounter = 0;
  bool found = false;

  inputFile.open("beginning.txt");
  while(inputFile >> testNum){
    indexCounter++;
    if(testNum == 0){
      index = indexCounter;
      found = true;
    }
  }
  if (found)
  {
    cout << "For File Number 1, your target number was located" << endl;
    cout << "at: " << index << endl;
  }
  else
  {
    cout << "For File Number 1, your target number was not found." << endl;
  }

  inputFile.close();

  indexCounter = 0;
  found = false;
  inputFile.open("middle.txt");
  while(inputFile >> testNum){
    indexCounter++;
    if(testNum == 0){
      index = indexCounter;
      found = true;
    }
  }
  if (found)
  {
    cout << "For File Number 2, your target number was located" << endl;
    cout << "at: " << index << endl;
  }
  else
  {
    cout << "For File Number 2, your target number was not found." << endl;
  }

  inputFile.close();

  indexCounter = 0;
  found = false;
  inputFile.open("end.txt");
  while(inputFile >> testNum){
    indexCounter++;
    if(testNum == 0){
      index = indexCounter;
      found = true;
    }
  }
  if (found)
  {
    cout << "For File Number 3, your target number was located" << endl;
    cout << "at: " << index << endl;
  }
  else
  {
    cout << "For File Number 3, your target number was not found." << endl;
  }

  inputFile.close();

  indexCounter = 0;
  found = false;
  inputFile.open("none.txt");
  while(inputFile >> testNum){
    indexCounter++;
    if(testNum == 0){
      index = indexCounter;
      found = true;
    }
  }
  if (found)
  {
    cout << "For File Number 4, your target number was located" << endl;
    cout << "at: " << index << endl;
  }
  else
  {
    cout << "For File Number 4, your target number was not found." << endl;
  }

  inputFile.close();

}

/*************************************
 * Desription: Sort File function
 * Found on page 607.
 ************************************/
void sortFile(){
  int temp;
  int inputNum;
  int count1 = 0;
  int count2 = 0;
  int count3 = 0;
  int count4 = 0;
  int indexCounter;
  bool swapped;
  int array1[20];
  int array2[20];
  int array3[20];
  int array4[20];

  string fileName1;
  string fileName2;
  string fileName3;
  string fileName4;
  ifstream inputFile;
  ofstream outputFile;
  
  cout << "What would you like to name the sorted file 1? " << endl;
  cin >> fileName1;

  cout << "What would you like to name the sorted file 2? " << endl;
  cin >> fileName2;

  cout << "What would you like to name the sorted file 3? " << endl;
  cin >> fileName3;

  cout << "What would you like to name the sorted file 4? " << endl;
  cin >> fileName4;
  
  indexCounter = 0;
  inputFile.open("beginning.txt");
  while(inputFile >> inputNum){
    array1[indexCounter] = inputNum;
    indexCounter++;
  } 
  inputFile.close();

  indexCounter = 0;
  inputFile.open("middle.txt");
  while(inputFile >> inputNum){
    array2[indexCounter] = inputNum;
    indexCounter++;
  }
  inputFile.close();

  indexCounter = 0;
  inputFile.open("end.txt");
  while(inputFile >> inputNum){
    array3[indexCounter] = inputNum;
    indexCounter++;
  } 
  inputFile.close();

  indexCounter = 0;
  inputFile.open("none.txt");
  while(inputFile >> inputNum){
    array4[indexCounter] = inputNum;
    indexCounter++;
  }
  inputFile.close();
  
  do{
    swapped = false;
    for (int index1 = 0; index1 < 19; index1++)
      {
      if(array1[index1] > array1[index1 + 1])
        {
        temp = array1[index1];
        array1[index1] = array1[index1 + 1];
        array1[index1 + 1] = temp;
        swapped = true;
        }
      }
count1++;
} while(swapped);

  do{
    swapped = false;
    for (int index2 = 0; index2 < 19; index2++)
      {
      if(array2[index2] > array2[index2 + 1])
        {
        temp = array2[index2];
        array2[index2] = array2[index2 + 1];
        array2[index2 + 1] = temp;
        swapped = true;
        }
      }
count2++;
} while(swapped);

  do{
    swapped = false;
    for (int index3 = 0; index3 < 19; index3++)
      {
      if(array3[index3] > array3[index3 + 1])
        {
        temp = array3[index3];
        array3[index3] = array3[index3 + 1];
        array3[index3 + 1] = temp;
        swapped = true;
        }
      }
count3++;
} while(swapped);

  do{
    swapped = false;
    for (int index4 = 0; index4 < 19; index4++)
      {
      if(array4[index4] > array4[index4 + 1])
        {
        temp = array4[index4];
        array4[index4] = array4[index4 + 1];
        array4[index4 + 1] = temp;
        swapped = true;
        }
      }
count4++;
} while(swapped);
  
  outputFile.open(fileName1);
  for(int index5 = 0; index5 < 20; index5++)
    {
    outputFile << array1[index5] << endl;
    }
  outputFile.close();

  outputFile.open(fileName2);
  for(int index6 = 0; index6 < 20; index6++)
    {
    outputFile << array2[index6] << endl;
    }
  outputFile.close();

  outputFile.open(fileName3);
  for(int index7 = 0; index7 < 20; index7++)
    {
    outputFile << array3[index7] << endl;
    }
  outputFile.close();

  outputFile.open(fileName4);
  for(int index8 = 0; index8 < 20; index8++)
    {
    outputFile << array4[index8] << endl;
    }
  outputFile.close();
  
  cout << endl << "File 1 took " << count1 << " iterations to fully sort." << endl;
  cout << endl << "File 2 took " << count2 << " iterations to fully sort." << endl;
  cout << endl << "File 3 took " << count3 << " iterations to fully sort." << endl;
  cout << endl << "File 4 took " << count4 << " iterations to fully sort." << endl;
}

/**********************************
 * Description: Binary Search Program
 * found on page 598
 *********************************/
void binarySearchFile(){
  int temp;
  int inputNum;
  int indexCounter;
  bool swapped;
  int array1[20];


  string fileName;
  ifstream inputFile;

  cout << "Please enter the name of a SORTED file that you would like to search?" << endl;
  cin >> fileName;

  indexCounter = 0;
  inputFile.open(fileName);
  while(inputFile >> inputNum){
    array1[indexCounter] = inputNum;
    indexCounter++;
  }
  inputFile.close();

  do{
    swapped = false;
    for (int index1 = 0; index1 < 19; index1++)
      {
      if(array1[index1] > array1[index1 + 1])
        {
        temp = array1[index1];
        array1[index1] = array1[index1 + 1];
        array1[index1 + 1] = temp;
        swapped = true;
        }
      }
  } while(swapped);

int loc1 = -1;

bool found = false;
int first = 0;
int last = 19;
int middle;
int target = 0;

while(!found && first <= last)
  {
  middle = (first + last) / 2;
  if (array1[middle] == target)
    {
    found = true;
    loc1 = middle;
    }
  else if (array1[middle] > target)
    last = middle - 1;
  else if (array1[middle] < target)
    first = middle + 1;
  }

if(loc1 != -1)
   {
   cout << "For your file, your target number was located" << endl;
   }
else
  {
  cout << "For your file, your target number was not found" << endl;
  }
}
