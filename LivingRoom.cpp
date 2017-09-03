#include "LivingRoom.hpp"
#include "Macros.hpp"

LivingRoom::LivingRoom()
{

	spaceID = 1;
	label = "The Living Room";
	description = "This is the starting area for our detective.";

	moveEast = "(E) Head to the dinning area of the mansion ";
	moveWest = "(W) Head to the butler's room ";
	moveNorth = "(N) Head to the back yard ";
	moveSouth = "(S) Head to the stairway entrance ";

	search1 = "";
	search2 = "";
	search3 = "";


	interrogation = "(G) Interrogate the suspects ";

	interrogate1 = "(1) Interrogate James Wield, Subcontractor CEO.";
	interrogate2 = "(2) Interrogate Cynthia Upton, Home-care nurse.";
	interrogate3 = "(3) Interrogate Martha Thatch, chairman's wife.";
	interrogate4 = "(4) Interrogate Jane Smith, chairman's daughter.";
	interrogate5 = "(5) Interrogate Henry Thatch, chairman's brother-in-law.";
	interrogate6 = "(6) Interrogate Charlie Brown, chairman's butler.";


	investigate = false;
	interrogate = true;
	arrestable = false;
}





/* Function name: special function
** Description: allows the player to interrogate the area
** Paramters: referenced player object
**
*/
bool LivingRoom::specialFunction(Player &player1)
{

	bool validInput = false;


	while (!validInput)
	{

		cout << endl;
		char choice;

		cin >> choice;

		while (!(choice == '1' || choice == '2' || choice == '3' || choice == '4' || choice == '5' || choice == '6' || choice =='7'))
		{
			cout << "Invalid choice, must be 1-7." << endl;
			cin >> choice;
		}

		switch (choice)
		{
		case '1':
		{
			clrf();

			cout << "*******************************************************************************************" << endl;
			cout << "*You talked to James Wield, and he gives you some more information...                     *" << endl;
			cout << "*He is the child hoold friend of the chairman, and CEO of a meat processing company       *" << endl;
			cout << "*that delivers processed pork and beef for the chairman's company.                        *" << endl;
			cout << "*He had something to say to the chairman, so he came late at night around 7:30pm, stayed  *" << endl;
			cout << "*for around 30 mintues, then left.                                                        *" << endl;
			cout << "*He came back to the mansion at around 9:20pm once he realized that he forgot that he     *" << endl;
			cout << "*left his cell phone there.                                                               *" << endl;
			cout << "*He found the chairman dead when he came back and was surpised, so he told the wife       *" << endl;
			cout << "*immediately. He called the police right afterwards.                                      *" << endl;
			cout << "*******************************************************************************************" << endl;

			validInput = true;
			pause2();
			break;
		}


		case '2':
		{
			clrf();

			cout << "*******************************************************************************************" << endl;
			cout << "*You talked to Cynthia Upton, and she gives you some more information...                  *" << endl;
			cout << "*The nurse visited the chairman's house 3 times a week to give him treatment from high    *" << endl;
			cout << "*blood pressure and diabetes. On the day of the crime the nurse arrived at around 7:00pm  *" << endl;
			cout << "*The nurse gave the chairman a shot and an IV drip, waited until he fell asleep, then     *" << endl;
			cout << "*went back home at around 8:30pm                                                          *" << endl;
			cout << "*******************************************************************************************" << endl;

			validInput = true;
			pause2();
			break;

		}


		case '3':
		{
			clrf();

			cout << "*******************************************************************************************" << endl;
			cout << "*You talked to Martha Thatch, and she gives you some more information..                   *" << endl;
			cout << "*She was at home the entire time watching TV. She had family with her daughter and the    *" << endl;
			cout << "*chairman at 6:00pm. She saw her brother going in and out, the nurse coming and going for *" << endl;
			cout << "*work. She saw the subcontractor CEO come and go several times.                           *" << endl;
			cout << "*At 9:20pm, the subcontractor came back to get his cell phone and told her that her       *" << endl;
			cout << "*husband was killed.                                                                      *" << endl;
			cout << "*******************************************************************************************" << endl;

			validInput = true;
			pause2();
			break;
		}

		case '4':
		{
			clrf();


			cout << "*******************************************************************************************" << endl;
			cout << "*You talked to Jane Smith, and she gives you some more information..                      *" << endl;
			cout << "*The daughter came home at around 5:00pm, then had dinner with her mom and dad at         *" << endl;
			cout << "*around 6:00pm. Afterwards, she stayed and kept practicing her ballerina dance in her     *" << endl;
			cout << "*room. She then heard her mom screaming, then ran to the study room and saw that her      *" << endl;
			cout << "*dad has passed away.                                                                     *" << endl;
			cout << "*******************************************************************************************" << endl;

			validInput = true;
			pause2();
			break;
		}

		case '5':
		{
			clrf();

			cout << "*******************************************************************************************" << endl;
			cout << "*You talked to Henry Thatch, and he gives you some more information..                     *" << endl;
			cout << "*He is unmarried and the brother of the chairman's wife. He came home at 7:10pm during    *" << endl;
			cout << "*the day of the crime. After talking with the chairman, he went to get a beer at a        *" << endl;
			cout << "*local convenience store at around 7:30pm. After spending an hour outside, he brought     *" << endl;
			cout << "*several cans of beer home at around 8:30pm. He was drinking alone in his room until      *" << endl;
			cout << "*He heard his sister scream.                                                              *" << endl;
			cout << "*******************************************************************************************" << endl;

			validInput = true;
			pause2();
			break;
		}

		case '6':
		{
			clrf();

			cout << "*******************************************************************************************" << endl;
			cout << "*You talked to Charlie Brown, and he gives you some more information..	                   *" << endl;
			cout << "*He said that he helped the nurse commute by picking her up at around 7:00pm to take her  *" << endl;
			cout << "*to treat the chairman. After dropping off the nurse, he had about an hour and a half     *" << endl;
			cout << "*of free time, so he had dinner. The nurse said she was going back home at around 8:30pm  *" << endl;
			cout << "*so he took her home and came back at around 9:00pm. He parked the car at the chairman's  *" << endl;
			cout << "* garage, then went home after that.                                                      *" << endl;
			cout << "*******************************************************************************************" << endl;

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