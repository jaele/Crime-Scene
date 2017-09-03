#include "BrotherinlawsRoom.hpp"
#include "Macros.hpp"

BrotherinlawsRoom::BrotherinlawsRoom()
{

	spaceID = 8;
	label = "Henry's Room";
	description = "This is the room of the chairman's brother-in-law.";

	moveEast = "(E) Head to the back yard ";
	moveWest = "(W) Head to secret passage ";
	moveNorth = "(N) Head to secret passage ";
	moveSouth = "(S) Head to secret passage ";

	investigation = "(V) Investigate the area ";
	
	search1 = "(1) Look in the trash bin";
	search2 = "(2) Look at the bed";
	search3 = "(3) Look at the beer can";

	investigate = true;
	interrogate = false;
	arrestable = false;
}


/* Function name: special function
** Description: allows the player to investigate the area
** Paramters: referenced player object
**
*/
bool BrotherinlawsRoom::specialFunction(Player &player1)
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

			if (!player1.getlifeinsurancePaper())
			{

				cout << "******************************************************************" << endl;
				cout << "*You found a life insurance paper                                *" << endl;
				cout << "******************************************************************" << endl;

				cout << "*******************************************************************" << endl;
				cout << "*You read the paper and it appears that the home-care nurse is the*" << endl;
				cout << "*beneficiary of the insurance. It says that she will obtain 100k  *" << endl;
				cout << "*upon the chairman's death.                                       *" << endl;
				cout << "*******************************************************************" << endl;

				cout << "*******************************************************************" << endl;
				cout << "*It appears that Henry is upset and went out drinking because his *" << endl;
				cout << "*name wasn't the life insurance paper as a beneficiary, neither   *" << endl;
				cout << "*his sister, whom is the chairman's wife.                         *" << endl;
				cout << "*******************************************************************" << endl;


				player1.setlifeinsurancePaper(true);
			}

			else
			{
				cout << "*******************************************************************" << endl;
				cout << "*You place the life insurance paper back                          *" << endl;
				cout << "*******************************************************************" << endl;

				player1.setlifeinsurancePaper(false);
			}

			validInput = true;
			pause2();
			break;


		}

		case '2':
		{
			clrf();

			cout << "*********************************************************************" << endl;
			cout << "*You looked at the bed.. It appears that even though the chairman is*" << endl;
			cout << "*rich, his brother-in-laws is living like a destitute person. The   *" << endl;
			cout << "*bed is all dirty, and looks like it hasn't been cleaned in ages    *" << endl;
			cout << "*The whole room looks poor as well..                                *" << endl;
			cout << "*********************************************************************" << endl;

			validInput = true;
			pause2();
			break;

		}


		case '3':
		{
			clrf();

			if (!player1.getbeerCan())
			{
				cout << "**********************************************************************" << endl;
				cout << "*You found a beer can                                                *" << endl;
				cout << "**********************************************************************" << endl;

				cout << "**********************************************************************" << endl;
				cout << "*There appears to be a lot of receipts inside the can.               *" << endl;
				cout << "*The receipt shows that the brother-in-law has is an alcoholic       *" << endl;
				cout << "*This must be why the chairman never paid attention to his brother-  *" << endl;
				cout << "*in-law. Giving him a place to live inside the mansion was good      *" << endl;
				cout << "*enough..                                                            *" << endl;
				cout << "**********************************************************************" << endl;

				player1.setbeerCan(true);
			}

			else
			{
				cout << "**********************************************************************" << endl;
				cout << "*You place the beer can back                                         *" << endl;
				cout << "**********************************************************************" << endl;

				player1.setbeerCan(false);

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
			cout << "Invalid input, must choose from 1-4!" << endl;
			break;
		}
		}
	}


	return false;
}