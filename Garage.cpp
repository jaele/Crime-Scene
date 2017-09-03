#include "Garage.hpp"	


Garage::Garage()
{

	spaceID = 11;
	label = "The Garage";
	description = "This is where the car is parked.";

	moveEast = "(E) Head to secret passage ";
	moveWest = "(W) Head to the back yard ";
	moveNorth = "(N) Head to secret passage ";
	moveSouth = "(S) Dead end/Exit mansion ";

	investigate = false;
	interrogate = false;
	arrestable = false;
}


bool Garage::specialFunction(Player &player1)
{
	return false;
}