#include "Stairway.hpp"

Stairway::Stairway()
{

	spaceID = 2;
	label = "The Mansion's stairway";
	description = "This is stairway passage leads to the upper floor of the mansion.";

	moveEast = "(E) Head to the master's bedroom ";
	moveWest = "(W) Head to the study room ";
	moveNorth = "(N) Head to the daughter's room ";
	moveSouth = "(S) Head down stairs ";

	investigate = false;
	interrogate = false;
	arrestable = false;
}

bool Stairway::specialFunction(Player& player1)
{
	return false;
}