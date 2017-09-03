#ifndef BUTLERSROOM_HPP
#define BUTLERSROOM_HPP

#include "Mansion.hpp"


class ButlersRoom: public Mansion
{

private:
	// pointers to butler's room
	ButlersRoom *east;
	ButlersRoom *west;
	ButlersRoom *north;
	ButlersRoom *south;

public:
	ButlersRoom();

	bool specialFunction(Player &);

};


#endif