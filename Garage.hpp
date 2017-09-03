#ifndef GARAGE_HPP
#define GARAGE_HPP

#include "Mansion.hpp"
#include "Game.hpp"

class Garage:  public Mansion
{
private:

	Garage *east;
	Garage *west;
	Garage *north;
	Garage *south;

public:
	Garage();

	bool specialFunction(Player&);
};

#endif