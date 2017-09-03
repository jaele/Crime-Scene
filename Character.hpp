#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;


// abstract base class
class Character
{

protected:

	string characterName;
	string displayName;
	string previousLocation;

	string pocket1;
	string pocket2;
	string pocket3;
	string pocket4;
	string pocket5;
	string pocket6;
	string pocket7;
	string pocket8;
	string pocket9;
	string pocket10;
	string pocket11;
	

public:


	// get the name of character
	virtual string getcharacterName();


	// set the display name that players create
	virtual void setdisplayName(string);
	virtual string getdisplayName();



	// set and get the locations of the character
	virtual void setpreviousLocation(string);
	virtual string  getpreviousLocation();


	virtual string getPocket1();
	virtual string getPocket2();
	virtual string getPocket3();
	virtual string getPocket4();
	virtual string getPocket5();
	virtual string getPocket6();
	virtual string getPocket7();
	virtual string getPocket8();
	virtual string getPocket9();
	virtual string getPocket10();
	virtual string getPocket11();

	virtual void checkPocket() = 0;



};

#endif

/*
John Smith - chairman
Martha Thatch - chairman's wife
Jane Smith - daughter
Henry Thatch - chairman's brother-in-law
Charlie Brown- chairman's butler
James Wield - subcontractor CEO 
Cynthia Upton - homecare nurse

*/