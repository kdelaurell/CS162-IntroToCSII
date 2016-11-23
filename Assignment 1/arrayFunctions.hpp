/************************************************
 * Author: Kyle De Laurell
 * Date: 1/13/16
 * Description: This is the arrayFunctions header
 * file.
 ***********************************************/

#define NUMROWS  100
#define NUMCOLS  100

void makeChanges(int mainArray[NUMROWS][NUMCOLS], int *newArray);

void copyArray(int *mainArray, int *changedArray);

void displayArray(int mainArray[NUMROWS][NUMCOLS]);

void clearArray();

int menu();

void initializeArray(int mainArray[NUMROWS][NUMCOLS], int choice, int Row, int Col);

int getRow();

int getCol();
