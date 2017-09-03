#include "MasterBedroom.hpp"

MasterBedroom::MasterBedroom()
{


	spaceID = 6;
	label = "The Master Bedroom ";
	description = "This is the room of the chairman and his wife.";

	moveEast = "(E) Head to secret passage ";
	moveWest = "(W) Head to the stairway entrance ";
	moveNorth = "(N) Head to secret passage ";
	moveSouth = "(S) Head to secret passage ";


	investigation = "(V) Investigate the area ";

	search1 = "(1) Look inside the drawer";
	search2 = "(2) Look on the desk";
	search3 = "(3) Check the bathroom";

	investigate = true;
	interrogate = false;
	arrestable = false;

}


bool MasterBedroom::specialFunction(Player &player1)
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

			if (!player1.getdriverResume())
			{
				cout << "****************************************************************" << endl;
				cout << "*You found the butler's resume                                 *" << endl;
				cout << "****************************************************************" << endl;

				cout << "****************************************************************" << endl;
				cout << "*It appears that the chairman's wife had hired the butler.     *" << endl;
				cout << "*It seems that he is well trained in martial arts. He used to  *" << endl;
				cout << "*be a security guard after all.. Perhaps there something going *" << endl;
				cout << "*on between the butler and the chairman's wife?                *" << endl;
				cout << "****************************************************************" << endl;

				player1.setdriverResume(true);

			}

			else
			{
				cout << "****************************************************************" << endl;
				cout << "*You place the butler's resume back                            *" << endl;
				cout << "****************************************************************" << endl;

				player1.setdriverResume(false);

			}

			validInput = true;
			pause2();
			break;

		}

		case '2':
		{

			clrf();

			if (!player1.getsleepingPills())
			{
				cout << "****************************************************************" << endl;
				cout << "*You found some sleeping medication pills                      *" << endl;
				cout << "****************************************************************" << endl;


				cout << "****************************************************************" << endl;
				cout << "*It appears that Martha has been taking these pills in order to*" << endl;
				cout << "*sleep at night. Are the pills used for something else?        *" << endl;
				cout << "****************************************************************" << endl;

				player1.setsleepingPills(true);
			}

			else
			{
				cout << "****************************************************************" << endl;
				cout << "*You placed the sleeping medication pills back                 *" << endl;
				cout << "****************************************************************" << endl;

				player1.setsleepingPills(false);
			}

			validInput = true;
			pause2();
			break;

		}

		case '3':
		{
			clrf();

			if (!player1.getcontractDocument())
			{
				cout << "****************************************************************" << endl;
				cout << "*You found a contract document inside the bathroom trash       *" << endl;
				cout << "****************************************************************" << endl;

				cout << "*****************************************************************" << endl;
				cout << "*It appears that there was a huge contract deal that the        *" << endl;
				cout << "*chairman recently made. However, the wife name wasn't on that  *" << endl;
				cout << "*contract. She was probably upset when she found out and threw  *" << endl;
				cout << "*the document inside the trash.                                 *" << endl;
				cout << "*****************************************************************" << endl;


				player1.setcontractDocument(true);
			}


			else
			{
				cout << "*****************************************************************" << endl;
				cout << "You place the contract document back                             " << endl;
				cout << "*****************************************************************" << endl;


				player1.setcontractDocument(false);
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



