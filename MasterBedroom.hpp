#ifndef MASTERBEDROOM_HPP
#define MASTERBEDROOM_HPP	

#include "Mansion.hpp"
#include "Game.hpp"

class MasterBedroom : public Mansion
{

private:
	// pointers to masterbedroom
	MasterBedroom *east;
	MasterBedroom *west;
	MasterBedroom *north;
	MasterBedroom *south;

public:

	MasterBedroom();

	bool specialFunction(Player &);
};


#endif