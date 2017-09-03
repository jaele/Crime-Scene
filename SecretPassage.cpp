#include "SecretPassage.hpp"

SecretPassage::SecretPassage()
{

	spaceID = 11;
	label = "A Secret Passage";
	description = "This secret passage leads to the garage.";

	moveEast = "(E) Head to the garage";
	moveWest = "(W) Head to the garage";
	moveNorth = "(N) Head to the garage";
	moveSouth = "(S) Head to the garage";


	search1 = "";
	search2 = "";
	search3 = "";

	investigate = false;
	interrogate = false;
	arrestable = false;
}



bool SecretPassage::specialFunction(Player &player1)
{
	return false;

}