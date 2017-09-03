#include "StudyRoom.hpp"


StudyRoom::StudyRoom()
{

	spaceID = 9;
	label = "Study Room";
	description = "This is area where the chairman died.";

	moveEast = "(E) Head to the stairway entrance ";
	moveWest = "(W) Head to secret passage ";
	moveNorth = "(N) Head to the balcany ";
	moveSouth = "(S) Head to secret passage";



	investigation = "(V) Investigation the area";


	search1 = "(1) Look at the bookshelf";
	search2 = "(2) Look at the corpse";
	search3 = "(3) Look at the desk";

	investigate = true;
	interrogate = false;
	arrestable = false;

}


bool StudyRoom::specialFunction(Player &player1)
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

			if (!player1.getnewsPaper())
			{
				cout << "****************************************************************" << endl;
				cout << "*You found a news paper article                                *" << endl;
				cout << "****************************************************************" << endl;

				cout << "****************************************************************" << endl;
				cout << "*It appears that the chairman found out that one of the factory*" << endl;
				cout << "*owned by his childhood friend, the subcontractor CEO,         *" << endl;
				cout << "*James Wield, has been burned down. James Wield probably came  *" << endl;
				cout << "*to ask the chairman to borrow some money but the chairman     *" << endl;
				cout << "*refused.                                                      *" << endl;
				cout << "****************************************************************" << endl;

				player1.setnewsPaper(true);

			}
			   
			else
			{

				cout << "****************************************************************" << endl;
				cout << "*You place the news paper article back                         *" << endl;
				cout << "****************************************************************" << endl;

				player1.setnewsPaper(false);
			}

			validInput = true;
			pause2();
			break;
		}


		case '2':
		{
			clrf();

			cout << "************************************************************************" << endl;
			cout << "*You looked at the corpse. It appears that the chairman has been       *" << endl;
			cout << "*stabbed by a sharp weapon on the neck, and a large amount of blood    *" << endl;
			cout << "*lost. Other than a towel placed on his neck, no signs of resistance   *" << endl;
			cout << "*or goods being stolen were found. According to the location where the *" << endl;
			cout << "*stabbing is, the murderer is right-handed.                            *" << endl;
			cout << "************************************************************************" << endl;

			validInput = true;
			pause2();
			break;


		}


		case '3':
		{

			clrf();


			if (!player1.getminitureTower())
			{
				cout << "************************************************************************" << endl;
				cout << "*You found a miniture eiffel tower on the desk							*" << endl;
				cout << "************************************************************************" << endl;

				cout << "*************************************************************************" << endl;
				cout << "*You examine the miniture tower closely and found out that there's a    *" << endl;
				cout << "*knife hidden beneath it!!! The knife is covered in blood..             *" << endl;
				cout << "*Someone must have used this weapon to kill the chairmain, but who?..   *" << endl;
				cout << "*************************************************************************" << endl;


				player1.setminitureTower(true);
			}


			else
			{
				cout << "*************************************************************************" << endl;
				cout << "*You placed the miniture eiffel tower back                              *" << endl;
				cout << "*************************************************************************" << endl;

				player1.setminitureTower(false);

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