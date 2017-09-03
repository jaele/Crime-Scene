#ifndef GAME_HPP
#define GAME_HPP

#include "Character.hpp"
#include "Player.hpp"
#include "Mansion.hpp"

class Game
{
private:

	int timer;

public:
	Game();


	void startGame();

	void playerIntro(Player &);

	void displaycurrentArea(Player&, Mansion);

	void displayPocket(Player &);

	void displayInvestigate(Player &, Mansion &);

	void displayInterrogate(Player &, Mansion &);

	void displayAccuse(Player &, Mansion &);


	void gameEnding(Player &);

};

// macros
int verifyInput();
void pause();
void pause2();
void clrf();



#endif