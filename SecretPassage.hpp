#ifndef SECRETPASSAGE_HPP
#define SECRETPASSAGE_HPP

#include "Mansion.hpp"
#include "Game.hpp"
// hidden passage to the garage


class SecretPassage : public Mansion
{

private:

	SecretPassage *east;
	SecretPassage *west;
	SecretPassage *north;
	SecretPassage *south;

public:

	SecretPassage();

	bool specialFunction(Player &);
};



#endif