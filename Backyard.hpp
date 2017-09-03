#ifndef BACKYARD_HPP
#define BACKYARD_HPP

#include "Mansion.hpp"
#include "Game.hpp"

class Backyard: public Mansion
{

private:

	Backyard *east;
	Backyard *west;
	Backyard *north;
	Backyard *south;

public:
	Backyard();

	bool specialFunction(Player &);

};


#endif