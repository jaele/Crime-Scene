#ifndef STAIRWAY_HPP
#define STAIRWAY_HPP

#include "Mansion.hpp"

// passage up to the second level


class Stairway :  public Mansion
{

private:
	// pointers to stairway
	Stairway *east;
	Stairway *west;
	Stairway *north;
	Stairway *south;

public:

	Stairway();

	bool specialFunction(Player &);
};



#endif