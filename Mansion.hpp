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

/*
MansionID = 0;
LivingRoomID = 1;
StairwayID = 2;
KitchenID = 3;
ButlersRoomID = 4;
BackyardID = 5;
MasterBedroomID = 6;
DaughtersRoomID = 7;
BrotherinlawsRoomID = 8;
StudyRoomID = 9;
BalconyID = 10;
GarageID = 11;
*/