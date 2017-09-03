#include "Game.hpp"
#include "Macros.hpp"

#include <iostream>
#include <string>

using namespace std;

Game::Game() {}

void Game::startGame()
{
	Player player1;
	Game game;

	Mansion *currentRoom = NULL;
	Mansion *passage[15];
	Mansion *exitMansion = currentRoom->createPassage(passage);


	timer = 60;

	playerIntro(player1);

	currentRoom = passage[0];


	while (currentRoom != exitMansion)
	{

		char choice;

		Mansion *nextPassage = NULL;


		while (nextPassage == NULL)
		{

			clrf();


			displaycurrentArea(player1, *currentRoom);   // show the gui and options

			if (timer == 0)
			{
				clrf();
				cout << "You ran out of time!" << endl << endl;
				cout << "You have forfeit your job!" << endl << endl;
			
				exit(1);
			}


			
			cin >> choice;

			if (choice == 'N'|| choice == 'n')
			{
				nextPassage = currentRoom->northDirection();

			}

			else if (choice == 'S' || choice == 's')
			{
				nextPassage = currentRoom->southDirection();

			}

			else if (choice == 'W' || choice == 'w')
			{
				nextPassage = currentRoom->westDirection();
	
			}

			else if (choice == 'E' || choice == 'e')
			{
				nextPassage = currentRoom->eastDirection();

			}


			else if (choice == 'I' || choice == 'i')
			{

				player1.checkPocket();
				clrf();
				displayPocket(player1);
				pause2();
			}

			else if (choice == 'V' || choice == 'v') // investigate area
			{

				if (currentRoom->getInvestigate())
				{
					displayInvestigate(player1, *currentRoom);

				}

				else // display message that it cannot be investigated
				{


					cout << "Cannot be investigated here " << endl;
				}

			}


			else if (choice == 'G' || choice == 'g') // interrogate people

			{

				if (currentRoom->getInterrogate())
				{
					displayInterrogate(player1, *currentRoom);
				}

				else
				{
					cout << "Cannot be interrogated here" << endl;
				}

			}


			else if (choice == 'H' || choice == 'h')  // room accuse and arrest / handcuff
			{
				if (currentRoom->getArrestable())
				{
					displayAccuse(player1, *currentRoom);
				}

				else
				{
					cout << "Can't be arrested here,! " << endl;
				}
			}





			else if (choice == 'Q' || choice == 'q')
			{
				clrf();
				cout << "You have left Crime Scene..." << endl;
				exit(0);
			}

			
			if (nextPassage == NULL)
			{
				cout << endl << endl;
				cout << "What will you do next?" << endl;
				paused();
			}
			
		}

		player1.setpreviousLocation(currentRoom->getLabel());
		currentRoom = nextPassage;

		timer -= 2;

	}

}

// Introduction to the game and a little background on each suspects
void Game::playerIntro(Player &player1)
{
	clrf();


	cout << " Greatings detective! " << endl<< endl;
	cout << " You find yourself in front of an old mansion where the crime scene has occured" << endl<<endl;
	cout << " As a detective, it is your duty to investigate and find the criminal." << endl<< endl;
	paused();


	cout << endl << endl << endl;
	cout << "Last night, the owner of the mansion, and an extremely rich chairman of a entertainment company, " << endl;
	cout << "John Smith (64), was found dead on his bed.. " << endl << endl;
	cout << "The estimated time of his death was around 8:00pm to 9:20pm.." << endl << endl;
	cout << "His neck was stabbed by a sharp weapon, and a large amount of blood was lost. " << endl << endl;
	cout << "What kind of weapon was used is unknown for now. " << endl << endl;
	paused();


	cout << endl << endl << endl;
	cout << "There are six suspects, each related to the chairman." << endl << endl;
	cout << "You met with all six suspects, but have no idea on who the murderer is.." << endl << endl;
	cout << "The suspects each accused each other, but it is your duty to find concrete evidence. " << endl;
	paused();


	cout << endl << endl << endl;
	cout << "1.First suspect: Subcontractor CEO, James Wield (63) - He is a long friend of the chairman " << endl;
	cout << "and owns a pork and meat processing company." << endl;
	paused();


	cout << endl << endl << endl;
	cout << "2.Second suspect: Home-care nurse, Cythnia Upton (32) - She has been treating the chairman " << endl;
	cout << "ever since he was diagnosed with high blood pressure and diabetes. " << endl << endl;
	paused();


	cout << endl << endl << endl;
	cout << "3.Third suspect: Victim's wife, Martha Thatch (60) - She was at home the entire time watching	" << endl;
	cout << "TV. Saw everyone coming in and out of the house." << endl << endl;
	paused();


	cout << endl << endl << endl;
	cout << "4.Fourth suspect: Victim's daughter, Jane Smith (30) - The daughter is a ballerina and she likes " << endl;
	cout << "to shop for luxurious bags. She came home around 5:00pm and had dinner with her parents." << endl << endl;
	paused();

	cout << endl << endl << endl;
	cout << "5.Fifth suspect: Victim's brother-in-law, Henry Thatch (41) - Unmarried and brother of the victim's wife." << endl;
	cout << "He came home at around 7:10pm during the day of the crime. After talking with the chairman, he went to the " << endl;
	cout << "local conveience store to by some beers. " << endl << endl;
	paused();


	cout << endl << endl << endl;
	cout << "6.Sixth suspect: The family's driver and chairman's butler, Charlie Brown (32) - Originally worked at a private" << endl;
	cout << "security company, and now got his current job through an interview with the chairman's wife." << endl << endl;
	paused();


	clrf();


	bool validName = false;

	string name;

	while (!validName)
	{

		cout << endl;
		cout << "What is your name detective? ";
		getline(cin, name);
		player1.setdisplayName(name);

		if (name.length() <= 0)
		{
			cout << "Invalid character! " << endl;
		}

		else
		{
			validName = true;
		}

	}
	paused();



	cout << endl;
	cout << "You have about an 1 hour to find the murderer." << endl << endl;
	cout << "Each room you visit decreases time by 2 minutes." << endl << endl;
	cout << "You are allowed to carry 11 items in your pockets. " << endl << endl;
	cout << "You must find the 1 evidence that is essential to accusing and arresting the murderer. " << endl << endl;
	cout << "You will present the items during the trial, and 1 of the item has to be associated with 1 of the suspect." << endl << endl;
	cout << "To place an item back, select the choice again. " << endl << endl;
	paused();

	clrf();
	cout << "Ok.. " << player1.getdisplayName() << ", let's start finding some clues in this mansion.." << endl << endl;
	paused();

}

// display the current area user interface screen, and all the spaces the play visit
void Game::displaycurrentArea(Player &player1, Mansion currentArea)
{

	cout << "Name: Detective " << player1.getdisplayName() << endl << endl;
	
	cout << "Time left: " << timer << " minutes " << endl << endl << endl << endl;

	cout << "Previous Location: " << player1.getpreviousLocation() << endl << endl;
	
	cout << "Current Location: " << currentArea.getLabel() << endl << endl;
	
	cout << "Location description: " << currentArea.printInfo() << endl << endl;


	cout << "*************************************************************************" << endl;
	cout << "                                                                         " << endl;
	cout << "     " << currentArea.moveEastward()  <<  endl;
	cout << "     " << currentArea.moveWestward()  <<  endl;
	cout << "     " << currentArea.moveNorthward() <<  endl;
	cout << "     " << currentArea.moveSouthward() <<  endl;
	cout << "                                                                         " << endl;
	cout << "     " << currentArea.investigationArea() << endl;
	cout << "     " << currentArea.interrogationArea() << endl;
	cout << "     " << currentArea.accusationArea() << endl;
	cout << "     (I) Pocket Items                                                    " << endl;
	cout << "     (Q) Exit Crime Scene                                                " << endl;
	cout << "*************************************************************************" << endl;

}

// display the inventory user interface
void Game::displayPocket(Player &player1)
{


	player1.checkPocket();

	
	cout << "*****************************************************************" << endl;
	cout << "                          POCKET                                 " << endl;
	cout << "                                                                 " << endl;
	cout << "   Pocket 1: " << player1.getPocket1() << endl;
	cout << "   Pocket 2: " << player1.getPocket2() << endl;              
	cout << "   Pocket 3: " << player1.getPocket3() << endl;
	cout << "   Pocket 4: " << player1.getPocket4() << endl;
	cout << "   Pocket 5: " << player1.getPocket5() << endl;
	cout << "   Pocket 6: " << player1.getPocket6() << endl;
	cout << "   Pocket 7: " << player1.getPocket7() << endl;
	cout << "   Pocket 8: " << player1.getPocket8() << endl;
	cout << "   Pocket 9: " << player1.getPocket9() << endl;
	cout << "   Pocket 10: " << player1.getPocket10() << endl;
	cout << "   Pocket 11: " << player1.getPocket11() << endl;
	cout << "                                                                 " << endl;
	cout << "*****************************************************************" << endl;
	

}


// display the investigation user interface
void Game::displayInvestigate(Player &player1, Mansion &currentArea)
{


	bool finished = false;

	while (!finished)
	{
		clrf();

		cout << "************************************************************" << endl;
		cout << "                      Investigate Area                      " << endl;
		cout << "                                                            " << endl;
		cout << "   " << currentArea.searchArea1() << endl;
		cout << "   " << currentArea.searchArea2() << endl;
		cout << "   " << currentArea.searchArea3() << endl;
		cout << "   (4) Stop investigation                                   " << endl;
		cout << "                                                            " << endl;
		cout << "************************************************************" << endl;
		
		cout << endl;
		cout << "What do you want to do next? " << endl;

		finished = currentArea.specialFunction(player1);

		if (!finished)
		{
			paused();
		}
	}

}

// display the interrogation user interface
void Game::displayInterrogate(Player &player1, Mansion &currentArea)
{


	bool finished = false;

	while (!finished)
	{

		clrf();

		cout << "************************************************************" << endl;
		cout << "                  Interrogate Suspects                      " << endl;
		cout << "                                                            " << endl;
		cout << "   " << currentArea.interrogatePerson1() << endl;
		cout << "   " << currentArea.interrogatePerson2() << endl;
		cout << "   " << currentArea.interrogatePerson3() << endl;
		cout << "   " << currentArea.interrogatePerson4() << endl;
		cout << "   " << currentArea.interrogatePerson5() << endl;
		cout << "   " << currentArea.interrogatePerson6() << endl;
		cout << "   (7) Stop interrogating                                   " << endl;
		cout << "                                                            " << endl;
		cout << "************************************************************" << endl;

		cout << endl;
		cout << "What do you want to do next? " << endl;

		finished = currentArea.specialFunction(player1);

		if (!finished)
		{
			paused();
		}
	}
}


// display the arrest user interface
void Game::displayAccuse(Player &player1, Mansion &currentArea)
{

	bool finished = false;

	while (!finished)
	{
		clrf();

		cout << "********************************************************" << endl;
		cout << "                  Accuse & Arrest                       " << endl;
		cout << "                                                        " << endl;
		cout << "   " << currentArea.arrestPerson1() << endl;
		cout << "   " << currentArea.arrestPerson2() << endl;
		cout << "   " << currentArea.arrestPerson3() << endl;
		cout << "   " << currentArea.arrestPerson4() << endl; 
		cout << "   " << currentArea.arrestPerson5() << endl;
		cout << "   " << currentArea.arrestPerson6() << endl;
		cout << "   (7) Stop accusation                                  " << endl;
		cout << "********************************************************" << endl;

		cout << endl;
		cout << "What do you want to do next? " << endl;

		finished = currentArea.specialFunction(player1);

		if (!finished)
		{
			paused();
		}
	}
}



