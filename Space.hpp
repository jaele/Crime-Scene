#ifndef SPACE_HPP
#define SPACE_HPP

#include "Player.hpp"
#include <string>

using namespace std;


// abstract base class
class Space
{
protected:

	int spaceID;

	// discription about spaces
	string label;
	string description;
	
	// buttons description for movement across spaces
	string moveEast;
	string moveWest;
	string moveNorth;
	string moveSouth;

	// buttons and description to start investigation and interrogation and accusation
	string investigation;
	string interrogation;
	string accusation;

	// buttons and description to search the area
	string search1;
	string search2;
	string search3;

	// buttons and description to interrogate people
	string interrogate1;
	string interrogate2;
	string interrogate3;
	string interrogate4;
	string interrogate5;
	string interrogate6;


	string arrest1;
	string arrest2;
	string arrest3;
	string arrest4;
	string arrest5;
	string arrest6;


	// to check whether the space can be investigated, interrogated, or has a special
	bool investigate;
	bool interrogate;
	bool arrestable;

public:

	Space() {};
	virtual ~Space() {};

	// return description about spaces and print info
	virtual string getLabel();
	virtual string printInfo();

	// return the discription to move
	virtual string moveEastward();
	virtual string moveWestward();
	virtual string moveNorthward();
	virtual string moveSouthward();

	virtual string investigationArea();
	virtual string interrogationArea();
	virtual string accusationArea();

	// return the description to search
	virtual string searchArea1();
	virtual string searchArea2();
	virtual string searchArea3();

	// return the description to interrogate
	virtual string interrogatePerson1();
	virtual string interrogatePerson2();
	virtual string interrogatePerson3();
	virtual string interrogatePerson4();
	virtual string interrogatePerson5();
	virtual string interrogatePerson6();

	virtual string arrestPerson1();
	virtual string arrestPerson2();
	virtual string arrestPerson3();
	virtual string arrestPerson4();
	virtual string arrestPerson5();
	virtual string arrestPerson6();


	// pure virtual special function
	virtual bool specialFunction(Player&)= 0;

	// getters 
	virtual bool getInvestigate();
	virtual bool getInterrogate();
	virtual bool getArrestable();
};

#endif