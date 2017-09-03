#ifndef LIVINGROOM_HPP
#define LIVINGROOM_HPP

#include "Mansion.hpp"
#include "Game.hpp"

// main starting area


class LivingRoom :  public Mansion
{

private:

	LivingRoom *west;
	LivingRoom *east;
	LivingRoom *north;
	LivingRoom *south;

public:

	LivingRoom();

	bool specialFunction(Player &);


};



#endif




