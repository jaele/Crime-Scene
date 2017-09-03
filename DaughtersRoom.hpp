#ifndef DAUGHTERSROOM_HPP
#define DAUGHTERSROOM_HPP

#include "Mansion.hpp"
#include "Game.hpp"

class DaughtersRoom: public Mansion
{
private:
	// pointers to daughters room
	DaughtersRoom *east;
	DaughtersRoom *west;
	DaughtersRoom *north;
	DaughtersRoom *south;

public:
	DaughtersRoom();

	bool specialFunction(Player &);

};


#endif