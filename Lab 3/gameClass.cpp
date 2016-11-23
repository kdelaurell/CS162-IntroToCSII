/***********************************************
 ** Author: Kyle De Laurell
 ** Date: 1/16/2016
 ** Description: DieClass source file
 ***********************************************/
#include <iostream>
#include "gameClass.hpp"
#include "dieClass.hpp"
#include "loadedDieClass.hpp"
#include <cstdlib>

//default constructor
Game::Game(){
   //gets player 1 inforamtion
   std::cout << "Please enter the number of sides for " << std::endl;
   std::cout << "Player 1's die: " << std::endl;
   std::cin >> this->numSidesP1;
   std::cout << "Is Player 1's Dice Loaded? (1 for Yes, 0 for No)" << std::endl;
   std::cin >> this->player1Loaded;

   //gets player 2 information
   std::cout << "Please enter the number of sides for " << std::endl;
   std::cout << "Player 2's die: " << std::endl;
   std::cin >> this->numSidesP2;
   std::cout << "Is Player 2's Dice Loaded? (1 for Yes, 0 for No)" << std::endl;
   std::cin >> this->player2Loaded;
   
   //gets the number of rounds played for a game
   std::cout << "How many rounds would you like to play?" << std::endl;
   std::cin >> this->numRounds; 
}

//This functions plays the dice rolling game
void Game::playGame(){
   //initializes variables
   int rounds;
   int p1Roll = 0;
   int p2Roll = 0;
 
   //intializes the Die for each player 
   //and sets the number of rounds for the loop
   loadedDie player1(this->numSidesP1);
   loadedDie player2(this->numSidesP2);
   rounds = this->numRounds;   

   //seeds the random number generator
   srand(time(NULL));


   //executes each round of the game and keeps score
   for(int index = 0; index < rounds; index++)
      {
         //holds the time to help random number generation
         sleep(1);
         
      
         std::cout << "Turn " << (index + 1) << std::endl;
         
         //executes player 1 roll
         if(this->player1Loaded)
            p1Roll = player1.loadedRollDie();
         else
            p1Roll = player1.rollDie();
         sleep(1);
 
         //executes player 2 roll
         if(this->player2Loaded)
            p2Roll = player2.loadedRollDie();
         else
            p2Roll = player2.rollDie();
         
         std::cout << "Player 1 Roll: " << p1Roll << std::endl;
         std::cout << "Player 2 Roll: " << p2Roll << std::endl;
         
         //adds a point for whoever won the round
         if(p1Roll > p2Roll)
            player1W();
         else if(p2Roll > p1Roll)
            player2W();
      }
  
  //displays the final results
  displayFinalOutput();
}


//adds a point to player 1s score
void Game::player1W(){
   this->player1Score++;
}

//adds a point to player 2 score
void Game::player2W(){
   this->player2Score++;
}

//displays the finall results of the game
void Game::displayFinalOutput(){

   //displays player 1 game information
   std::cout << std::endl << std::endl;
   std::cout << "Player 1's Die had " << this->numSidesP1;
   std::cout << " sides." << std::endl;
   if(this->player1Loaded)
      std::cout << "Player 1's Die was Loaded" << std::endl;
   else
      std::cout << "Player 1's Die was not Loaded" << std::endl;
   std::cout << "Player 1's Score: " << this->player1Score << std::endl;
   

   //displays player 2 game information
   std::cout << "Player 2's Die had " << this->numSidesP2;
   std::cout << " sides." << std::endl;
   if(this->player2Loaded)
      std::cout << "Player 2's Die was Loaded" << std::endl;
   else
      std::cout << "Player 2's Die was not Loaded" << std::endl;
   std::cout << "Player 2's Score: " << this->player2Score << std::endl
;


   //displays the winner of the game
   if(this->player1Score > this->player2Score)
      std::cout << "Player 1 WINS!!! Congratulations!" << std::endl;
   else if(this->player2Score > this->player1Score)
      std::cout << "Player 2 WINS!!! Congratulations!" << std::endl;
   else
      std::cout << "The game end in a Tie..." << std::endl;
}
