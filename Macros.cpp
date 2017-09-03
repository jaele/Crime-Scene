#include "Macros.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <limits>

using namespace std;

// function to verify inputs
int verifyInput()
{
	int choice = 0;
	string selection;
	stringstream stream;
	cout << "Enter your selection: ";
	getline(cin, selection);

	stream << selection;
	stream >> choice;

	if (choice < 1)
	{
		choice = verifyInput();
	}


	return choice;
}


// function to pause the game and continue when user hits enter
void paused()
{

	cout << endl << endl << endl;
	cout << "Press the Enter to continue." << flush;
	cin.ignore(numeric_limits < streamsize> ::max(), '\n');
}

void pause2()
{
	cout << endl << endl << endl;
	cin.ignore(numeric_limits < streamsize> ::max(), '\n');
}



// function to clear the screen with 100 blank lines 
void clrf()
{
	for (int i = 0; i < 100; i++)
	{
		cout << endl;
	}

}
