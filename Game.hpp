#ifndef GAME_HPP
#define GAME_HPP

#include "Character.hpp"
#include "Player.hpp"
#include "Mansion.hpp"

class Game
{
private:
	// timer for game
	int timer;

public:
	Game();

	// start the game
	void startGame();

	// display the gui to the player
	void playerIntro(Player &);

	void displaycurrentArea(Player&, Mansion);

	void displayPocket(Player &);

	void displayInvestigate(Player &, Mansion &);

	void displayInterrogate(Player &, Mansion &);

	void displayAccuse(Player &, Mansion &);

};


#endif