/************************************************
 * Author: Kyle De Laurell
 * Date: 1/13/16
 * Description: This is the arrayFunctions source
 * file.
 ***********************************************/
#include <iostream>
#include "arrayFunctions.hpp"
using namespace std;

/****************************************************
 * Description: This function goes through the array
 * and decides whether each cell lives or dies through
 * the next iteration and creates a new CHANGE array
 * with all the new stored cells.
 ***************************************************/
void makeChanges(int mainArray[NUMROWS][NUMCOLS], int *newArray)
{
   int count;
   int newArrayCount = 0;
   bool alive = false;
   for(int i = 0; i < NUMROWS; i++)
      {
      for(int j = 0; j < NUMCOLS; j++)
         {
         if(i != 0 && i != (NUMROWS - 1) && j != 0 && j != (NUMCOLS - 1))
            {
            count = 0;
            count = mainArray[i - 1][j - 1] + mainArray[i - 1][j] + mainArray[i - 1][j + 1] +
                    mainArray[i][j + 1] + mainArray[i + 1][j + 1] + mainArray[i + 1][j] +
                    mainArray[i + 1][j - 1] + mainArray[i][j - 1];  
            }
         else
            {
            if(i == (NUMROWS - 1) && j == (NUMCOLS - 1))
               count = mainArray[i][j-1] + mainArray[i-1][j-1] + mainArray[i-1][j-1];
            else if(i == 0 && j == 0)
               count = mainArray[i][j + 1] + mainArray[i + 1][j + 1] + mainArray[i + 1][j + 1];
            else if(i == 0 && j == (NUMCOLS - 1))
               count = mainArray[i + 1][j] + mainArray[i][j - 1] + mainArray[i + 1][j - 1];
            else if(i == (NUMROWS - 1) && j == 0)
               count = mainArray[i - 1][j] + mainArray[i - 1][j + 1] + mainArray[i][j + 1];
            else if(i == 0)
               count = mainArray[i][j-1] + mainArray[i][j+1] + mainArray[i + 1][j - 1] 
                     + mainArray[i + 1][j] + mainArray[i + 1][j + 1];
            else if(j == 0)
               count = mainArray[i - 1][j] + mainArray[i - 1][j + 1] + mainArray[i][j + 1]
                     + mainArray[i + 1][j + 1] + mainArray[i + 1][j];
            else if(j == (NUMCOLS - 1))
               count = mainArray[i - 1][j] + mainArray[i - 1][j - 1] + mainArray[i][j - 1]
                     + mainArray[i + 1][j - 1] + mainArray[i + 1][j];
            else if(i == (NUMROWS - 1))
               count = mainArray[i][j - 1] + mainArray[i][j + 1] + mainArray[i - 1][j - 1]
                     + mainArray[i - 1][j] + mainArray[i - 1][j + 1];
            }
         if(mainArray[i][j] == 0)
            alive = false;
         else
            alive = true;
         if (alive)
            {
            
            if(count < 2)
               newArray[newArrayCount] = 0;   
            else if(count > 3)
               newArray[newArrayCount] = 0;
            else
               newArray[newArrayCount] = 1;
            }
          else
            {
            if(count == 3)
               newArray[newArrayCount] = 1;
            else
               newArray[newArrayCount] = 0;
            }
         newArrayCount++;
         }
      }

}
/*************************************************
 * Description: This function copies over the 
 * changes made to the Game of Life Array 
 * over the last iteration.
 ************************************************/
void copyArray(int *mainArray, int *changedArray)
   {
   int TotalCount = NUMROWS * NUMCOLS;
   for(int index = 0; index < TotalCount; index++)
      {
      mainArray[index] = changedArray[index];
      }
   }
/************************************************
 * Description: This function displays the array
 * to the screen.
 ***********************************************/
void displayArray(int mainArray[NUMROWS][NUMCOLS])
   {
   string output;
   for(int i =  40; i < NUMROWS - 40; i++)
      {
      for(int j = 30; j < NUMCOLS - 30; j++)
         {
         output = ".";
         if(mainArray[i][j] == 1)
            output = "X";
         cout << output << " ";
         }
      cout << endl; 
      }
   }
/*************************************************
 * Description: This function clears the screen
 * and pauses to help create an animation to the game.
 ************************************************/
void clearArray()
   {
   cout << "\033[2J";
   usleep(100000);
   }
/************************************************
 * Description: This function displays the menu 
 * to choose which pattern you want to see.
 ***********************************************/
int menu()
   {
   int choice;
   cout << "Welcome to the Game of Life!" << endl;
   cout << "Please enter a number for your choice shape:" << endl;
   cout << "1-Oscillator" << endl;
   cout << "2-Glider" << endl;
   cout << "3-Glider Gun" << endl;
   cin >> choice;
   while(choice < 1 || choice > 3)
      {
      cout << "Please enter a valid choice!" << endl;
      cin >> choice;
      }
   return choice;
   }

/***************************************************
 * Description: This function initializes the array
 * to whatever pattern and starting position the user
 * inputted.
 ****************************************************/
void initializeArray(int mainArray[NUMROWS][NUMCOLS], int choice, int row, int col)
   {
   for(int l = 0; l < NUMROWS; l++)
      {
      for(int m = 0; m < NUMCOLS; m++)
         { 
         mainArray[l][m] = 0;
         }
      }
      row += 39;
      col += 29;   
        
   
    if(choice == 1)
       {
       mainArray[row][col] = 1;
       mainArray[row + 1][col] = 1;
       mainArray[row + 2][col] = 1;
       }
     else if(choice == 2)
        {
        mainArray[row][col + 1] = 1;
        mainArray[row + 1][col + 2] = 1;
        mainArray[row + 2][col + 2] = 1;
        mainArray[row + 2][col + 1] = 1;
        mainArray[row + 2][col] = 1;
        }
     else
        {
        mainArray[row][col + 23] = 1;
        mainArray[row][col + 24] = 1;
        mainArray[row][col + 34] = 1;
        mainArray[row][col + 35] = 1;
        mainArray[row + 1][col + 22] = 1;
        mainArray[row + 1][col + 24] = 1;
        mainArray[row + 1][col + 34] = 1;
        mainArray[row + 1][col + 35] = 1;
        mainArray[row + 2][col] = 1;
        mainArray[row + 2][col + 1] = 1;
        mainArray[row + 2][col + 9] = 1;
        mainArray[row + 2][col + 10] = 1;
        mainArray[row + 2][col + 22] = 1;
        mainArray[row + 2][col + 23] = 1;
        mainArray[row + 3][col] = 1;
        mainArray[row + 3][col + 1] = 1;
        mainArray[row + 3][col + 8] = 1;
        mainArray[row + 3][col + 10] = 1;
        mainArray[row + 4][col + 8] = 1;
        mainArray[row + 4][col + 9] = 1;
        mainArray[row + 4][col + 16] = 1;
        mainArray[row + 4][col + 17] = 1;
        mainArray[row + 5][col + 16] = 1;
        mainArray[row + 5][col + 18] = 1;
        mainArray[row + 6][col + 16] = 1;
        mainArray[row + 7][col + 35] = 1;
        mainArray[row + 7][col + 36] = 1;
        mainArray[row + 8][col + 35] = 1;
        mainArray[row + 8][col + 37] = 1;
        mainArray[row + 9][col + 35] = 1;
        mainArray[row + 12][col + 24] = 1;
        mainArray[row + 12][col + 25] = 1;
        mainArray[row + 12][col + 26] = 1;
        mainArray[row + 13][col + 24] = 1;
        mainArray[row + 14][col + 25] = 1;
        }
 
   }
/*********************************
 * Description: gets starting row from user
 ********************************/
int getRow()
{
   int row;
   cout << "What Row do you want to start in? (1-20)" << endl;
   cin >> row;
   while(row < 1 || row > 20)
      {
      cout << "Make sure your selection is in between 1 and 20." << endl;
      cout << "Please re-enter your row." << endl;
      cin >> row;
      }
   return row;
}
/***********************************************
 * Description: gets starting column from user.
 **********************************************/
int getCol()
{
   int col;
   cout << "The starting position will be the top left corner of your shape." << endl;
   cout << "So the shape will not be above or left of the starting position." << endl;
   cout << "What Column do you want to start in? (1-40)" << endl;
   cin >> col;
   while(col < 1 || col > 40)
      {
      cout << "Make sure your selection is in between 1 and 40." << endl;
      cout << "Please re-enter your column." << endl;
      cin >> col;
      }
   return col;
}
