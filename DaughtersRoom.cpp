#include "DaughtersRoom.hpp"
#include "Macros.hpp"

DaughtersRoom::DaughtersRoom()
{


	spaceID = 7;
	label = "Jane's Room ";
	description = "This is the room of the daughter.";

	moveEast = "(E) Head to secret passage";
	moveWest = "(W) Head to secret passage";
	moveNorth = "(N) Head to secret passage";
	moveSouth = "(S) Head to stairway entrance";
	
	investigation = "(V) Investigate the area";

	search1 = "(1) Look in the closet";
	search2 = "(2) Look at the book-shelf";
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
bool DaughtersRoom::specialFunction(Player &player1)
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


			if (!player1.getrainCoat())
			{
				cout << "******************************************************************" << endl;
				cout << "*You found a raincoat, it has a weird smell on it..              *" << endl;
				cout << "******************************************************************" << endl;

				player1.setrainCoat(true);
			}

			else
			{

				cout << "*****************************************************************" << endl;
				cout << "*You place back the raincoat                                    *" << endl;
				cout << "*****************************************************************" << endl;

				player1.setrainCoat(false);
			}

			validInput = true;
			pause2();
			break;
		}


		case '2':
		{
			clrf();

			if (!player1.getAnatomyBook())
			{
				cout << "**************************************************************" << endl;
				cout << "*You picked up a human anatomy book                          *" << endl;
				cout << "**************************************************************" << endl;

				cout << "**************************************************************" << endl;
				cout << "*There are some notes written inside..                       *" << endl;
				cout << "**************************************************************" << endl;

				player1.setAnatomyBook(true);
			}

			else
			{
				cout << "**************************************************************" << endl;
				cout << "*You placed the book back on the shelf                       *" << endl;
				cout << "**************************************************************" << endl;

				player1.setAnatomyBook(false);
			}

			validInput = true;
			pause2();
			break;

		}


		case '3':
		{
			clrf();


			if (!player1.getbankdebtNotes())
			{
				cout << "**************************************************************" << endl;
				cout << "*You found a bank debt note                                  *" << endl;
				cout << "**************************************************************" << endl;


				cout << "**************************************************************" << endl;
				cout << "*You read the bank notes to find out that the daughter has   *" << endl;
				cout << "*been in a lot of debt from buying luxurious items           *" << endl;
				cout << "*It appears that the chairman has paid for all of her debt   *" << endl;
				cout << "*until now. She is shop-aholic and won't stop buying         *" << endl;
				cout << "**************************************************************" << endl;

				player1.setbankdebtNotes(true);
			}
			else
			{
				cout << "**************************************************************" << endl;
				cout << "*You place the bank debt note back                            *" << endl;
				cout << "**************************************************************" << endl;

				player1.setbankdebtNotes(false);

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
