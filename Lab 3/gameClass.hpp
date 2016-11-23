/************************************************
 ** Author: Kyle De Laurell
 ** Date: 1/21/16
 ** Description: Game Class header file
 ************************************************/

#ifndef gameClass_HPP
#define gameClass_HPP
class Game{
   private:
      int player1Score;
      int player2Score;
      int numSidesP1;
      int numSidesP2;
      bool player1Loaded;
      bool player2Loaded;
      int numRounds;
   public:
      Game();
      void player1W();
      void player2W();
      void playGame();
      void displayFinalOutput();
      
};

#endif
