#ifndef BROTHERINLAWSROOM_HPP
#define BROTHERINLAWSROOM_HPP

#include "Mansion.hpp"
#include "Game.hpp"

class BrotherinlawsRoom: public Mansion
{
private:
	// pointers to brother-in-laws room
	BrotherinlawsRoom *east;
	BrotherinlawsRoom *west;
	BrotherinlawsRoom *north;
	BrotherinlawsRoom *south;

public:

	BrotherinlawsRoom();

	bool specialFunction(Player &);

};

#endif