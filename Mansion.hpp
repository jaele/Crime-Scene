#ifndef MANSION_HPP
#define MANSION_HPP

#include "Space.hpp"

#include <iostream>
#include <string>

using namespace std;

// derived from space class
// other classes will inherited from this class

class Mansion :public Space
{

protected:
	// pointers to mansion
	Mansion *east;
	Mansion *west;
	Mansion *north;
	Mansion *south;

public:

	// default constructor
	Mansion();


	Mansion *eastDirection();
	Mansion *westDirection();
	Mansion *northDirection();
	Mansion *southDirection();

	Mansion *createPassage(Mansion **);

	bool specialFunction(Player&);

};


#endif
