#ifndef BALCANY_HPP
#define BALCANY_HPP

#include "Mansion.hpp"

class Balcany : public Mansion
{

private:
	// pointers to balcany
	Balcany *east;
	Balcany *west;
	Balcany *north;
	Balcany *south;

public:
	Balcany();

	bool specialFunction(Player &);

};

#endif