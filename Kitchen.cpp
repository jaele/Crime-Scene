#include "Kitchen.hpp"
#include "Macros.hpp"

Kitchen::Kitchen()
{

	spaceID = 3;
	label = "The Kitchen";
	description = "This is the family's cooking area.";

	
	moveWest = "(W) Head to the living room";
	moveEast = "(E) Head to a secret passage";
	moveNorth= "(N) Head to a secret passage";
	moveSouth = "(S) Head to a secret passage";
	

	investigation = "(V) Investigate the area ";

	search1 = "(1) Look out the window";
	search2 = "(2) Look under the sink";
	search3 = "(3) Look at the desk";

	investigate = true;
	interrogate = false;
	arrestable = false;

}

/* Function name: special function
** Description: allows the player to investigate the area
** Paramters: referenced player object
**
*/
bool Kitchen::specialFunction(Player &player1)
{
	bool validInput = false;


	while (!validInput)
	{

		cout << endl;
		char choice;

		cin >> choice;

		while (!(choice == '1' || choice == '2' || choice == '3' || choice == '4'))
		{
			cout << "Invalid choice, must be 1-4." << endl;
			cin >> choice;
		}

		switch (choice)
		{
		case '1':
		{
			clrf();

			cout << "******************************************************************" << endl;
			cout << "*       You see nothing of importance..                          *" << endl;
			cout << "******************************************************************" << endl;

			validInput = true;
			pause2();
			break;
		}


		case '2':
		{
			clrf();

			cout << "**************************************************************" << endl;
			cout << "*    You saw water dripping from one of the pipe             *" << endl;
			cout << "**************************************************************" << endl;

			validInput = true;
			pause2();
			break;

		}


		case '3':
		{
			clrf();

			if (!player1.getcellPhone())
			{
				cout << "******************************************************************" << endl;
				cout << "*You found the chairman's cellphone on the desk                  *" << endl;
				cout << "******************************************************************" << endl;

				cout << "******************************************************************" << endl;
				cout << "*You read the text messages and it appears that the home-care    *" << endl;
				cout << "*nurse wanted to break up with the chairman and go back to       *" << endl;
				cout << "*ex-husband. You continue looking at the phone and found a lot   *" << endl;
				cout << "*of missed-calls from the subcontractor CEO.                     *" << endl;
				cout << "******************************************************************" << endl;

				cout << "*******************************************************************" << endl;
				cout << "*The chairman must have ignored the CEO's request to borrow money.*" << endl;
				cout << "*******************************************************************" << endl;

				player1.setcellPhone(true);
			}


			else
			{
				cout << "*******************************************************************" << endl;
				cout << "*You placed the chairman's cellphone back on the desk             *" << endl;
				cout << "*******************************************************************" << endl;

				player1.setcellPhone(false);
			}

			validInput = true;
			pause2();
			break;
		}

		case '4':
		{
			return true;
		}


		default:
		{
			cout << "Invalid input, must choose from 1-4! " << endl;
			break;
		}

		}

	}

	return false;
}