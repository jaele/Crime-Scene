#include "Balcany.hpp"

Balcany::Balcany()
{


	spaceID = 10;
	label = "The Balcany";
	description = "This is an area behind the study room.";

	moveEast = "(E) Jump to the daughter's room ";
	moveWest = "(W) To secret passage ";
	moveNorth = "(N) Jump down to the back yard ";
	moveSouth = "(S) Head to the study room ";

	investigate = false;
	interrogate = false;
	arrestable = false;

}

bool Balcany::specialFunction(Player &player1)
{
	return false;
}