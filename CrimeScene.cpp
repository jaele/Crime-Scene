/*********************************************************************************************************************
** Author: James Le
** Date: 12/07/2015
** Description: This is a test driver program for the final project. The game will start here, and the player will 
** be allowed to choose fro the menu options. 
** Input: makefile, ./test
** Output: testDriver
*********************************************************************************************************************/

#include <iostream>
#include <ctime>

#include "Macros.hpp"
#include "Game.hpp"
#include "Mansion.hpp"
#include "Character.hpp"
#include "Player.hpp"


using namespace std;

// view the introduction menu
void viewIntro();
void viewInstruction();
void viewCredit();


int main()
{

	srand((unsigned int)time(NULL));

	Game game;


	while (true)
	{

		clrf();

		viewIntro();
		int choice;

		choice = verifyInput();

		switch (choice)
		{
			case 1:
			{
				game.startGame();
				break;
			}

			case 2:
			{
				clrf();
				viewInstruction();
				paused();

				break;
			}

			case 3:
			{
				clrf();
				viewCredit();
				paused();

				break;
			}

			case 4:
			{
				clrf();
				cout << "You have left Crime Scene..." << endl;
				exit(0);

				break;
			}

			default:
			{
				clrf();
				cout << "Not a choice! Please select from 1-4." << endl;

				break;
			}

		}// end of switch statement

	}// end of while loop

	return 0;
}


void viewIntro()
{
	cout << "*****************************************************************************" << endl;
	cout << "*                                                                           *" << endl;
	cout << "*                                  CRIME SCENE                              *" << endl;
	cout << "*                                                                           *" << endl;
	cout << "*****************************************************************************" << endl;
	cout << "                                   1. Start                                  " << endl;
	cout << "                                   2. Instructions                           " << endl;
	cout << "                                   3. Credits                                " << endl;
	cout << "                                   4. Exit Program                           " << endl;

}



void viewInstruction()
{
	cout << "*****************************************************************************************************************" << endl;
	cout << "*                                                 INSTRUCTIONS                                                  *" << endl;
	cout << "*                                                                                                               *" << endl;
	cout << "* You were called to do an investigation of a mystery murder inside of an old mansion.                          *" << endl;
	cout << "* Try to find all the clues and evidence inside the mansion within 1 hour.                                      *" << endl;
	cout << "* If the timer runs out before you have found the exact evidence to accuse the suspect,                         *" << endl;
	cout << "* you will fail the mission..along with your job.                                                               *" << endl;
	cout << "* There are clues scattered around, however, you must have the exact evidence in your inventory                 *" << endl;
	cout << "* when you make the accusation. There will be descriptions for you to deduce who the real murderer is.          *" << endl;
	cout << "* You will need to find the key item to acccuse and arrest the suspect.                                         *" << endl;
	cout << "* There's 1 key item that is associated with each suspect.                                                      *" << endl;
	cout << "* Once you find that piece of evidence, gather everyone in the back yard and make your decision.                *" << endl;
	cout << "* Even if you have the key item, you must correctly guess the murderer through all the evidence                 *" << endl;
	cout << "* lying around.                                                                                                 *" << endl;
	cout << "*                                                                                                               *" << endl;
	cout << "*****************************************************************************************************************" << endl;

}


void viewCredit()
{

	cout << "*****************************************************************" << endl;
	cout << "*                                                               *" << endl;
	cout << "*        Created by James Le                                    *" << endl;
	cout << "*        Fall 2015                                              *" << endl;
	cout << "*        CS 162 Final Project - Crime Scene                     *" << endl;
	cout << "*                                                               *" << endl;
	cout << "*****************************************************************" << endl;

}