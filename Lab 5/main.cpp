/*************************************************
 * *Author: Kyle De Laurell
 * *Date: 2/3/16
 * *Description: This is the main program for the Predator Prey
 * *Automaton.
 * **************************************************/
#include <iostream>
#include <cstdlib>
#include <string>
#include "Ant.hpp"
#include "Doodlebug.hpp"
#include "Critters.hpp"
#include "mainFunctions.hpp"

using std::cout;
using std::cin;
using std::endl;

int main(){
//initialize variables needed
int rows;
int cols;
int numAnts;
int numDood;
int randRow;
int randCol;
int index1;
int index2;
int numSteps;
bool initiated = false;
srand(time(NULL));
Critters** critterArray;
Critters** tempArray;

//gather initialization information
cout << "How many rows would you like in your world? " << endl;
cin >> rows;

cout << "How many columns would you like in your world? " << endl;
cin >> cols;

//intialize arrays
critterArray = new Critters* [rows * cols];
tempArray = new Critters* [rows * cols];

//get starting numbers
cout << "How many Ants do you want to start with?" << endl;
cin >> numAnts;


cout << "How many Doodlebugs do you want to start with?" << endl;
cin >> numDood;


//randomly place critters on field
for(int i = 0; i < numAnts; i++)
   {
   initiated = false;
   do{
   randRow = rand() % rows;
   randCol = rand() % cols;

   if(critterArray[randRow*cols+randCol] == 0)
      {
      critterArray[randRow*cols+randCol] = new Ant();
      initiated = true;
      }
   }while(!initiated);
   }

for(int j = 0; j < numDood; j++)
   {
   initiated = false;
   do{
   randRow = rand() % rows;
   randCol = rand() % cols;

   if(critterArray[randRow*cols+randCol] == 0)
      {
      critterArray[randRow*cols+randCol] = new Doodlebug();
      initiated = true;
      }
   }while(!initiated);
   }

//ask how many iterations
cout << "How many steps would you like to see?" << endl;
cin >> numSteps;

//display initial field
displayField(critterArray, rows, cols);


while(numSteps != -1){
   
   for(int index = 0; index < numSteps; index++)
   {
   copyArray(critterArray, tempArray, rows, cols);
   
   //moves Doodlebugs
   for(index1 = 0; index1 < rows; index1++)
      {
      for(index2 = 0; index2 < cols; index2++)
         {
         if(critterArray[index1*cols+index2] != 0)
            {
            if(critterArray[index1*cols+index2]->getName() == "Doodlebug")
               {
               critterArray[index1*cols+index2]->Move(tempArray, critterArray, index1, index2, rows, cols);
               }
            }
         }
      }

   //moves Ants
   for(index1 = 0; index1 < rows; index1++)
      {
      for(index2 = 0; index2 < cols; index2++)
         {  
         if(critterArray[index1*cols+index2] != 0)
            {
            if(critterArray[index1*cols+index2]->getName() == "Ant")
               {  
               if(tempArray[index1*cols+index2]->getName() != "Doodlebug")
                  critterArray[index1*cols+index2]->Move(tempArray, critterArray, index1, index2, rows, cols);
               }
            }
         } 
      }

   copyArray(tempArray, critterArray, rows, cols);

   //breeds doodlebugs and ants
   for(index1 = 0; index1 < rows; index1++)
      {
      for(index2 = 0; index2 < cols; index2++)
         {
         if(critterArray[index1*cols+index2] != 0)
            {
            critterArray[index1*cols+index2]->Starve(tempArray, index1, index2, rows, cols);
            critterArray[index1*cols+index2]->Breed(tempArray, index1, index2, rows, cols);
            }
         }
      }

   copyArray(tempArray, critterArray, rows, cols);
   
   //animates display
   displayField(critterArray, rows, cols);
   cout << "\033[2J";
   usleep(500000);
   }
   cout << "How many steps would you like to see? (Enter -1 to exit)" << endl;
   cin >> numSteps;
   }

return 0;
}
