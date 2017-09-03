#include "ButlersRoom.hpp"

ButlersRoom::ButlersRoom()
{


	spaceID = 4;
	label = "Charlie's Room";
	description = "This is room of the chairman's butler.";

	moveEast = "(E) Head to the living room";
	moveWest = "(W) Head to secret passage";
	moveNorth = "(N) Head to secret passage";
	moveSouth = "(S) Head to secret passage";

	search1 = "";
	search2 = "";
	search3 = "";
	
	investigate = false;
	interrogate = false;
	arrestable = false;
}


bool ButlersRoom::specialFunction(Player &player1)
{
	return false;
}