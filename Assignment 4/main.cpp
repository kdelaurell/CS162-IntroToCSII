/************************************************
 * Author: Kyle De Laurell
 * Date: 2/11/16
 * Description: Main Source file
 *************************************************/
#include <iostream>
#include "Medusa.hpp"
#include "Creature.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include "mainFunctions.hpp"
#include "userClass.hpp"
#include "DynamicStack.hpp"
#include "DynamicQueue.hpp"
#include "QueueNode.hpp"
#include "Node.hpp"
#include <cstdlib>
using std::cout;
using std::endl;
using std::cin;

int main(){
  int numFighters;
  int round;
  int match;
  int winnerCount;
  bool displayRoundStats;
  User* user1;
  User* user2;
  Creature* fighterUser1;
  Creature* fighterUser2;
  Creature* loser;
  Creature* winner[100];
  Creature* outputCreature;
  DynamicStack loserPile;
  bool swapped;
  srand(time(NULL));
  numFighters = getNumFighters();

  user1 = new User();
  user2 = new User();
  cout << "Please Choose Player 1's Characters:" << endl;
  initializeUser(numFighters, user1);
  cout << "Please Choose Player 2's Characters:" << endl;
  initializeUser(numFighters, user2);

  cout << "Would you like to see detailed round stats? (1 yes or 0 no)" << endl;
  cin >> displayRoundStats;

  match = 0;
  while(!user1->lineupEmpty() && !user2->lineupEmpty()){
    match++;
    cout << "Match # " << match << endl;
    fighterUser1 = user1->getNextFighter();
    fighterUser2 = user2->getNextFighter();
    cout << "Player 1 will be using " << fighterUser1->getName() << endl;
    cout << "Player 2 will be using " << fighterUser2->getName() << endl;

    round = 0;
    while(fighterUser1->getStrengthPoints() > 0 && fighterUser2->getStrengthPoints() > 0){
      round++;
      fight(fighterUser1, fighterUser2, displayRoundStats);
      }

    if(fighterUser1->getStrengthPoints() > fighterUser2->getStrengthPoints()){
      cout << "Player 1 Wins!"<< endl << fighterUser1->getName();
      cout << " beat " << fighterUser2->getName() << " in " << round << " rounds!" << endl;
      fighterUser1->restore();
      user1->win();
      loser = user2->lose();
      loserPile.add(loser, 2);
    }
    else{
      cout << "Player 2 Wins!"<< endl << fighterUser2->getName();
      cout << " beat " << fighterUser1->getName() << " in " << round << " rounds!" << endl;
      fighterUser2->restore();
      user2->win();
      loser = user1->lose();
      loserPile.add(loser, 1);
    }
  }


  if(user1->getPoints() > user2->getPoints()){
    cout << "Player 1 WINS the tourney: " << user1->getPoints() << " - " << user2->getPoints() << endl;
    while(!user1->lineupEmpty()){
      winner[winnerCount] = user1->lose();
      winnerCount++;
    }
  }
  else{
    cout << "Player 2 WINS the tourney: " << user2->getPoints() << " - " << user1->getPoints() << endl;
    while(!user2->lineupEmpty()){
      winner[winnerCount] = user2->lose();
      winnerCount++;
    }
  }


  int numLeft = winnerCount;
  int index1;
  int rank = 0;
  int teamNumber;
  Creature* temp;
  cout << "Final Rankings:" << endl;
  do{
    swapped = false;
    for (int index1 = 0; index1 < (winnerCount - 1); index1++)
      {
      if(winner[index1]->getStrengthPoints() > winner[index1 + 1]->getStrengthPoints())
        {
        temp = winner[index1];
        winner[index1] = winner[index1 + 1];
        winner[index1 + 1] = temp;
        swapped = true;
        }
      }
} while(swapped);

for (int index1 = 0; index1 < winnerCount; index1++)
  {
    rank++;
    cout << rank << ". " << winner[index1]->getName() << endl;
  }
do{
  outputCreature = loserPile.remove(&teamNumber);
  if(outputCreature != NULL){
    rank++;
    cout << rank << ". " << outputCreature->getName() <<  " for Player " << teamNumber << endl;
  }
}while(outputCreature != NULL);

  return 0;

}
