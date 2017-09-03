#include "Backyard.hpp"

Backyard::Backyard()
{

	spaceID = 5;
	label = "The backyard area";
	description = "This is the mansion's backyard. You will round up all the suspect here and make your decision.";

	moveEast = "(E) Head to the garage ";
	moveWest = "(W) Head to the brother-in-laws' room ";
	moveNorth = "(N) Climb to the balcany ";
	moveSouth = "(S) Head to the living room ";


	accusation = "(H) Start accusation and arrest the suspect";


	arrest1 = "(1) Arrest the subcontractor CEO, James Wield";
	arrest2 = "(2) Arrest the home-care nurse, Cynthia Upton";
	arrest3 = "(3) Arrest the chairman's wife, Martha Thatch";
	arrest4 = "(4) Arrest the chairman's daughter, Jane Smith";
	arrest5 = "(5) Arrest the chairman's brother-in-law, Henry Thatch";
	arrest6 = "(6) Arrest the chairman's butler, Charlie Brown";

	investigate = false;
	interrogate = false;
	arrestable = true;

}


bool Backyard::specialFunction(Player &player1)
{

	bool validInput = false;

	while (!validInput)
	{

		cout << endl;
		char choice;


		cin >> choice;

		while (!(choice == '1' || choice == '2' || choice == '3' || choice == '4' || choice == '5' || choice == '6' || choice =='7' ))
		{
			cout << "Invalid choice, must be 1-7." << endl;
			cin >> choice;
		}


		switch (choice)
		{
		case '1':
		{
			clrf();

			if (!player1.getnewsPaper())
			{

				cout << "You don't have enough evidence to arrest him! " << endl;

			}

			else
			{
				cout << "You have arrested the subcontractor CEO, James Wield. " << endl;

				cout << "Unfortunately, he wasn't the murderer.. The real suspect has escaped." << endl;
				
				exit(1);
				
			}

			validInput = true;
			pause2();
			break;

		}

		case '2':
		{
			clrf();

			if (!player1.getcellPhone())
			{
				cout << "You don't have enough evidance to arrest her! " << endl;
			}


			else
			{
				cout << "You have arrested the home-care nurse, Cynthia Upton. " << endl;

				cout << "Unfortunately, she wasn't the murderer.. The real suspect has escaped." << endl;

				exit(1);
				
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
				cout << "You don't have enough evidence to arrest her! " << endl;
			}

			else
			{
				cout << "You have arrested the chairman's wife, Martha Thatch. " << endl;

				cout << "Unfortunately, she wasn't the murderer.. The real suspect has escaped." << endl;

				exit(1);
				
			}

			validInput = true;
			pause2();
			break;

		}

		case '4':
		{
			clrf();
			
			if (!player1.getrainCoat())
			{
				cout << "You don't have enough evidence to arrest her! " << endl;
			}


			else
			{
				cout << "You have arrested the chairman's daughter, Jane Smith. " << endl;
				
				cout << "Congratulation detective! You have found the murderer! " << endl;


				cout << "*************************************************************" << endl;
				cout << "* The background story on why she's the murderer.           *" << endl;
				cout << "* Jane is very shop-aholic and she is in tremendous debt.   *" << endl;
				cout << "* Her father used to pay for all her debt, but he has       *" << endl;
				cout << "* stopped lately. The loan sharks are now after her, and    *" << endl;
				cout << "* she has to find a way to get her dad's inheritance.       *" << endl;
				cout << "* The only way was to kill him...                           *" << endl << endl;
				cout << "* After eating dinner, Jane went back ito her room and      *" << endl;
				cout << "* pretended to practice her ballerina dance. Later that     *" << endl;
				cout << "* night right after the home-care nurse left the room,      *" << endl;
				cout << "* she turned on the shower to give herself an alibi         *" << endl;
				cout << "* She then put on her rain coat, and went through the       *" << endl;
				cout << "* balcany into her dad's study room with her ballerina      *" << endl;
				cout << "* skills. Because she's been in his room many time, she     *" << endl;
				cout << "* knew that there was a knife hidden in the miniture        *" << endl;
				cout << "* eiffel tower. She quickly took the knife and stabbed her  *" << endl;
				cout << "* dad in the neck, and killed him in 1 blow. She knew the   *" << endl;
				cout << "* exact location because she has been reading on the human  *" << endl;
				cout << "* anatomy book. She used the rain coat from getting blood   *" << endl;
				cout << "* splattered onto her..Afterwards, she rushed back into her *" << endl;
				cout << "* room and tried to wash the blood stain off the rain coat  *" << endl;
				cout << "* and acted like everything was normal...                   *" << endl;
				cout << "*************************************************************" << endl;


				exit(1);
			}

			validInput = true;
			pause2();
			break;
		}

		case '5':
		{
			clrf();

			if(!player1.getbeerCan())
			{
				cout << "You don't have enough evidence to arrest him! " << endl;
			}

			else
			{
				cout << "You have arrested the chairman's brother-in-law, Henry Thatch. " << endl;
				
				cout << "Unfortunately, he wasn't the murderer.. The real suspect has escaped." << endl;

				exit(1);
			}

			validInput = true;
			pause2();
			break;
		}

		case '6':
		{
			clrf();

			if (!player1.getdriverResume())
			{
				cout << "You don't have enough evidence to arrest him! " << endl;
			}

			else
			{
				cout << "You have arrested the chairman's butler, Charlie Brown. " << endl;

				cout << "Unfortunately, he wasn't the murderer.. The real suspect has escaped." << endl;

				exit(1);
			}

			validInput = true;
			pause2();
			break;
		}

		case '7':
		{
			return true;
		}

		default:
		{
			cout << "Invalid input, must choose from 1-7! " << endl;
			break;
		}
		}

	}

	return false;
}