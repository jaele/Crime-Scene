
#include "Mansion.hpp"
#include "LivingRoom.hpp"
#include "Stairway.hpp"
#include "Kitchen.hpp"
#include "ButlersRoom.hpp"
#include "Backyard.hpp"
#include "MasterBedroom.hpp"
#include "DaughtersRoom.hpp"
#include "BrotherinlawsRoom.hpp"
#include "StudyRoom.hpp"
#include "Balcany.hpp"
#include "Garage.hpp"
#include "SecretPassage.hpp"


Mansion::Mansion()
{
	spaceID = 0;
	label = "Old Mansion";
	description = "The main location where the crime scene took place";

	moveEast = "";
	moveWest = "";
	moveNorth = "";
	moveSouth = "";

	east = NULL;
	west = NULL;
	north = NULL;
	south = NULL;

	interrogation = "";
	investigation = "";

	search1 = "";
	search2 = "";
	search3 = "";

	investigate = false;
	interrogate = false;
	arrestable = false;

}

bool Mansion::specialFunction(Player& player1)
{
	return false;
}


Mansion *Mansion::eastDirection()
{
	return east;
}

Mansion *Mansion::westDirection()
{
	return west;
}

Mansion *Mansion::northDirection()
{
	return north;
}


Mansion *Mansion::southDirection()
{
	return south;
}


//Mansion *createPassage(Mansion** passage)

Mansion * Mansion::createPassage(Mansion ** passage)
{
	
	Mansion *exitMansion = new Mansion;

	passage[0] = new LivingRoom();
	passage[1] = new Stairway();
	passage[2] = new Kitchen();
	passage[3] = new ButlersRoom();
	passage[4] = new Backyard();
	passage[5] = new MasterBedroom();
	passage[6] = new DaughtersRoom();
	passage[7] = new BrotherinlawsRoom();
	passage[8] = new StudyRoom();
	passage[9] = new Balcany();
	passage[10] = new Garage();
	passage[11] = new SecretPassage();
	passage[12] = exitMansion;


	// all passage from the living room
	passage[0]->north = passage[4];   // living room to back yard
	passage[0]->east = passage[2];   // living room to kitchen
	passage[0]->west = passage[3];   // living room to butler's room
	passage[0]->south = passage[1];  // living room to stairway entrance

	// all passage from the stairway
	passage[1]->south = passage[0];  // stairway entrance to living room
	passage[1]->north = passage[6];  // stairway entrance to daughter's room
	passage[1]->east = passage[5];   // stairway entrance to  master's bedroom
	passage[1]->west = passage[8];   // stairway entrance to study room

	// all passage from the Kitchen
	passage[2]->west = passage[0];    // kitchen to living room
	passage[2]->north = passage[11];  // kitchen to secret passage
	passage[2]->east = passage[11];   // kitchen to secret passage
	passage[2]->south = passage[11];  // kitchen to secret passage

	// all passage from the Butler's room 
	passage[3]->east = passage[0];   // butler's room to living room
	passage[3]->west = passage[11];  // butler's room to secret passage
	passage[3]->north = passage[11];  // butler's room to secret passage
	passage[3]->south = passage[11];  // butler's room to secret passage

	// all passage from Backyard
	passage[4]->east = passage[10];  // back yard to garage
	passage[4]->west = passage[7];   // back yard to brother-in-laws's room
	passage[4]->north = passage[9];  // back yard to balcany
	passage[4]->south = passage[0];  // back yard to living room


	// all passage from mastes bed room
	passage[5]->west = passage[1];    // master bedroom to stairway entrance
	passage[5]->east = passage[11];   // master bedroom to secret passage
	passage[5]->north = passage[11];  // master bedroom to secret passage
	passage[5]->south = passage[11];  // master bedroom to secret passage


	// all passage from daughter's room
	passage[6]->south = passage[1];  // daughter's room to stairway entrance
	passage[6]->north = passage[11]; // daughter's room to secret passage
	passage[6]->east = passage[11];  // daughter's room to secret passage
	passage[6]->west = passage[11];  // daughter's room to secret passage

	// all passage from brother-in-laws' room
	passage[7]->east = passage[4];   // brother-in-laws' room to back yard
	passage[7]->west = passage[11];  // brother-in-laws' room to secret passage
	passage[7]->south = passage[11]; // brother-in-laws' room to secret passage
	passage[7]->north = passage[11]; // brother-in-laws' room to secret passage

	// all passage from  studyroom
	passage[8]->east = passage[1];  // studyroom to stairway entrance
	passage[8]->north = passage[9]; // studyroom to the balcany
	passage[8]->west = passage[11]; // studyroom to secret passage
	passage[8]->south = passage[11]; // studyroom to secret passage


	// all passage from balcany
	passage[9]->south = passage[8];  // balcany to studyroom
	passage[9]->east = passage[6];   // balcany to daughter's room
	passage[9]->north = passage[4];  // balcany to backyard
	passage[9]->west = passage[11];  // balcany to secret passage

	// all passage from garage 
	passage[10]->west = passage[4];   // garage to backyard
	passage[10]->north = passage[11];  // garage to secret passage
	passage[10]->east = passage[11];  // garage to secret passage
	passage[10]->south = exitMansion;  // exit mansion


	// all passage from secret passage
	// secret passages to garage
	passage[11]->north = passage[10];   
	passage[11]->south = passage[10];
	passage[11]->east = passage[10];
	passage[11]->west = passage[10];

	

	return exitMansion;
}