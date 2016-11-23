#include <iostream>
#include "Medusa.hpp"
#include "Creature.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include <cstdlib>
using std::cout;
using std::endl;
using std::cin;

int main(){

int programChoice;
int char1Choice;
int char2Choice;
Creature* char1;
Creature* char2;
int char1attack;
int char1defense;
int char1armor;
int char2attack;
int char2defense;
int char2armor;
int char1SP;
int char2SP;
int round;

  cout << "Please Choose from the following options: (Enter corresponding number)" << endl;
  cout << "1. Initiate Fight" << endl;
  cout << "2. Exit Program" << endl;
  cin >> programChoice;


while(programChoice != 2){
  
  cout << "Please choose the first character you would like to see in battle:" << endl;
  cout << "1. Medusa" << endl;
  cout << "2. Barbarian" << endl;
  cout << "3. Vampire" << endl;
  cout << "4. Blue Men" << endl;
  cout << "5. Harry Potter" << endl;
  cin >> char1Choice;

  cout << "Please choose the second character you would like to see in battle:" << endl;
  cout << "1. Medusa" << endl;
  cout << "2. Barbarian" << endl;
  cout << "3. Vampire" << endl;
  cout << "4. Blue Men" << endl;
  cout << "5. Harry Potter" << endl;
  cin >> char2Choice;
  
  if (char1Choice == 1)
    char1 = new Medusa();
  else if(char1Choice == 2)
    char1 = new Barbarian();
  else if(char1Choice == 3)
    char1 = new Vampire();
  else if(char1Choice == 4)
    char1 = new BlueMen();
  else if(char1Choice == 5)
    char1 = new HarryPotter();

  if (char2Choice == 1)
    char2 = new Medusa();
  else if(char2Choice == 2)
    char2 = new Barbarian();
  else if(char2Choice == 3)
    char2 = new Vampire();
  else if(char2Choice == 4)
    char2 = new BlueMen();
  else if(char2Choice == 5)
    char2 = new HarryPotter();


  srand(time(NULL));

  round = 0;

  cout << "You have chosen to have a " << char1->getName() << " battle a " << char1->getName() << "!" << endl;
  cout << "Let the Battle Begin!" << endl << endl;

  while( char1->getStrengthPoints() > 0 && char2->getStrengthPoints() > 0){
    round++;
    cout << "Round " << round << endl;

    //char 1 Rolls
    char1attack = char1->getAttackRoll();
    char1defense = char1->getDefenseRoll();
    char1armor = char1->getArmor();
    char1SP = char1->getStrengthPoints();

    //char 2 Rolls
    char2attack = char2->getAttackRoll();
    char2defense = char2->getDefenseRoll();
    char2armor = char2->getArmor();
    char2SP = char2->getStrengthPoints();

    //Apply Damages
    char2->applyDamage(char1attack, char2defense, char2armor);
    char1->applyDamage(char2attack, char1defense, char1armor);
   
    
    //display Round Statistics
    cout << char1->getName() << " Starting Strength: " << char1SP << endl;
    cout << char2->getName() << " Attack: " << char2attack << endl;
    cout << char1->getName() << " Defense:  " << char1defense << endl;
    cout << char1->getName() << " Armor: " << char1armor << endl;
    cout << char1->getName() << " Ending Strength: " << char1->getStrengthPoints() << endl << endl;
    
    if(char1->getStrengthPoints() > 0)
      {
      cout << char2->getName() << " Starting Strength: " << char2SP << endl;
      cout << char1->getName() << " Attack: " << char1attack << endl;
      cout << char2->getName() << " Defense:  " << char2defense << endl;
      cout << char2->getName() << " Armor: " << char2armor << endl;
      cout << char2->getName() << " Ending Strength: " << char2->getStrengthPoints() << endl;
      }
}

  if(char1->getStrengthPoints() > char2->getStrengthPoints())
    cout << char1->getName() << " WINS!" << endl;
  else
    cout << char2->getName() << " WINS!" << endl;


  cout << "Please Choose from the following options: (Enter corresponding number)" << endl;
  cout << "1. Initiate Another Fight" << endl;
  cout << "2. Exit Program" << endl;
  cin >> programChoice;
}

return 0;
}
