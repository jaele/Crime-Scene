#include "Player.hpp"	
#include <iostream>
#include <ctime>
#include <cstdlib>	

using namespace std;


Player::Player()
{

	characterName = "The Detective";
	displayName = "";
	previousLocation = "You just arrived at the mansion from the front gate. ";

	
	cellPhone = false;  
	beerCan = false; 
	rainCoat = false; 
	minitureEiffeltower = false;  
	humanAnatomyBook = false; 
	driverResume = false;
	newsPaper = false;	
	lifeinsurancePaper = false; 
	bankdebtNotes = false;	
	sleepingPills = false;	
	contractDocument = false; 


}

void Player::setcellPhone(bool cellPhone)
{
	this->cellPhone = cellPhone;

}


void Player::setbeerCan(bool beerCan)
{
	this->beerCan = beerCan;
}

void Player::setrainCoat(bool rainCoat)
{

	this->rainCoat = rainCoat;


}

void Player::setminitureTower(bool minitureEiffeltower)
{
	this->minitureEiffeltower = minitureEiffeltower;
}


void Player::setAnatomyBook(bool humanAnatomyBook)
{
	this->humanAnatomyBook = humanAnatomyBook;
}


void Player::setdriverResume(bool driverResume)
{
	this->driverResume = driverResume;
}



void Player::setnewsPaper(bool newsPaper)
{
	this->newsPaper = newsPaper;
}

void Player::setlifeinsurancePaper(bool lifeinsurancePaper)
{
	this->lifeinsurancePaper = lifeinsurancePaper;
}

void Player::setbankdebtNotes(bool bankdebtNotes)
{
	this->bankdebtNotes = bankdebtNotes;
}


void Player::setsleepingPills(bool sleepingPills)
{
	this->sleepingPills = sleepingPills;
}

void Player::setcontractDocument(bool contractDocument)
{
	this->contractDocument = contractDocument;
}



bool Player::getcellPhone()
{
	return cellPhone;
}


bool Player::getbeerCan()
{
	return beerCan;
}



bool Player::getrainCoat()
{
	return rainCoat;
}


bool Player::getAnatomyBook()
{
	return humanAnatomyBook;
}


bool Player::getminitureTower()
{
	return minitureEiffeltower;
}


bool Player::getdriverResume()
{
	return driverResume;
}


bool Player::getnewsPaper()
{

	return newsPaper;
}

bool Player::getlifeinsurancePaper()
{
	return lifeinsurancePaper;
}

bool Player::getbankdebtNotes()
{
	return bankdebtNotes;
}


bool Player::getsleepingPills()
{
	return sleepingPills;
}


bool Player::getcontractDocument()
{
	return contractDocument;
}



void Player::checkPocket()
{
	
	if (!cellPhone)
	{
		pocket1 = "Empty ";
	}

	else
	{
		pocket1 = "Chairman's Cell";
	}

	if (!beerCan)
	{
		pocket2 = "Empty ";
	}

	else
	{
		pocket2 = "Beer Can";
	}

	if (!rainCoat)
	{
		pocket3 = "Empty ";
	}

	else
	{
		pocket3 = "Rain Coat ";
	}


	if (!minitureEiffeltower)
	{
		pocket4 = "Empty ";
	}

	else
	{
		pocket4 = "Miniture Eiffel Tower";
	}

	if (!humanAnatomyBook)
	{
		pocket5 = "Empty ";
	}

	else
	{
		pocket5 = "Human Anatomy Book";
	}



	if (!driverResume)
	{
		pocket6 = "Empty ";
	}

	else
	{
		pocket6 = "Butler's Resume ";
	}


	if (!newsPaper)
	{
		pocket7 = "Empty ";
	}

	else
	{
		pocket7 = "News Paper Article";
	}

	if (!lifeinsurancePaper)
	{
		pocket8 = "Empty ";
	}

	else
	{
		pocket8 = "Life Insurance Paper";
	}

	if (!bankdebtNotes)
	{
		pocket9 = "Empty ";
	}

	else
	{
		pocket9 = "Bank Debt Notes ";
	}


	if (!sleepingPills)
	{
		pocket10 = "Empty ";
	}

	else
	{
		pocket10 = "Sleeping Medication Pills ";
	}

	if (!contractDocument)
	{
		pocket11 = "Empty ";
	}

	else
	{
		pocket11 = "Contract Deal Document";
	}

}