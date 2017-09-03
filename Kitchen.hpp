#ifndef KITCHEN_HPP
#define KITCHEN_HPP

#include "Mansion.hpp"
#include "Game.hpp"


class Kitchen : public Mansion
{

private:
	// pointers to kitchen
	Kitchen *east;
	Kitchen *west;
	Kitchen *north;
	Kitchen *south;

public:
	Kitchen();

	bool specialFunction(Player &);

};


#endif