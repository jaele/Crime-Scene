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

	
	cellPhone = false;  //check 
	beerCan = false; // check
	rainCoat = false; // check
	minitureEiffeltower = false;  // check
	humanAnatomyBook = false; // check
	driverResume = false; // check
	newsPaper = false;	// check
	lifeinsurancePaper = false;  // check
	bankdebtNotes = false;	// check
	sleepingPills = false;	// check
	contractDocument = false; // check

	/*
	load1 = false;
	load2 = false;
	load3 = false;

	pocketFull = false;

	keyitemFound = false;
	*/

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

void Player::setload1(bool load1)
{
	this->load1 = load1;
}

void Player::setload2(bool load2)
{
	this->load2 = load2;
}

void Player::setload3(bool load3)
{
	this->load3 = load3;
}



void Player::setpocketFull(bool pocketFull)
{
	this->pocketFull = pocketFull;
}


void Player::setarrestJane(bool arrestJane)
{
	this->arrestJane = arrestJane;
}

void Player::setarrestHenry(bool arrestHenry)
{
	this->arrestHenry = arrestHenry;
}

void Player::setarrestMartha(bool arrestMartha)
{
	this->arrestMartha = arrestMartha;
}

void Player::setarrestJames(bool arrestJames)
{
	this->arrestJames = arrestJames;
}

void Player::setarrestCharlie(bool arrestCharlie)
{
	this->arrestCharlie = arrestCharlie;
}

void Player::setarrestCynthia(bool arrestCynthia)
{
	this->arrestCynthia = arrestCynthia;
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



bool Player::getload1()
{
	return load1;
}


bool Player::getload2()
{
	return load2;
}


bool Player::getload3()
{
	return load3;
}

bool Player::getpocketFull()
{
	return pocketFull;
}


bool Player::getarrestJane()
{
	return arrestJane;
}

bool Player::getarrestHenry()
{
	return arrestHenry;
}

bool Player::getarrestMartha()
{
	return arrestMartha;
}

bool Player::getarrestJames()
{
	return arrestJames;
}


bool Player::getarrestCharlie()
{
	return arrestCharlie;
}


bool Player::getarrestCynthia()
{
	return arrestCynthia;
}




void Player::checkPocket()
{
	/*

	if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket1 = "Empty";
		load1 = false;

	}

	else if (cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket1 = "Chairman's Cell";
		load1 = true;
		
	}


	else if (!cellPhone && beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)

	{
		pocket1 = "Beer Can";
		load1 = true;

	}

	else if (!cellPhone && !beerCan && rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket1 = "Rain Coat";
		load1 = true;

	}


	else if (!cellPhone && !beerCan && !rainCoat && minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket1 = "Miniture Eiffel Tower";
		load1 = true;

	}

	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket1 = "Human Anatomy Book";
		load1 = true;
	}

	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket1 = "The Butler's Resume";
		load1 = true;

	}

	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket1 = "News Paper Article";
		load1 = true;
	}

	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket1 = "Life Insurance Paper";
		load1 = true;
	}

	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket1 = "Bank Debt Notes";
		load1 = true;
	}

	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && sleepingPills && !contractDocument)
	{
		pocket1 = "Sleeping Medication Pills";
		load1 = true;
	}


	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && contractDocument)
	{
		pocket1 = "Contract Document";
		load1 = true;
	}

	// end of pocket 1




	
	if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket2 = "Empty";
		load2 = false;
	}

	else if (cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket2 = "Chairman's Cell";
		load2 = true;
	}


	else if (!cellPhone && beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)

	{
		pocket2 = "Beer can";
		load2 = true; 
	}


	else if (!cellPhone && !beerCan && rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket2 = "Rain Coat";
		load2 = true;
	}

	else if (!cellPhone && !beerCan && !rainCoat && minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket2 = "Miniture Eiffel Tower";
		load2 = true;
	}


	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket2 = "Human Anatomy Book ";
		load2 = true;
	}


	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket2 = "The Butler's Resume";
		load2 = true;
	}

	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket2 = "News Paper Article";
		load2 = true;
	}

	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket2 = "Life Insurance Paper";
		load2 = true;
	}

	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket2 = "Bank Debt Notes";
		load2 = true;
	}

	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && sleepingPills && !contractDocument)
	{
		pocket2 = "Sleeping Medication Pills";
		load2 = true;
	}

	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && contractDocument)
	{
		pocket2 = "Contract Document";
		load2 = true;
	}


	// end of pocket 2


	if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket3 = "Empty";
		load3 = false;
	}

	else if (cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket3 = "Chairman's Cell";
		load3 = true;
	}


	else if (!cellPhone && beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)

	{
		pocket3 = "Beer can";
		load3 = true;
	}


	else if (!cellPhone && !beerCan && rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket3 = "Rain Coat";
		load3 = true;
	}

	else if (!cellPhone && !beerCan && !rainCoat && minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket3 = "Miniture Eiffel Tower";
		load3 = true;
	}


	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket3 = "Human Anatomy Book ";
		load3 = true;
	}


	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket3 = "The Butler's Resume";
		load3 = true;
	}

	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket3 = "News Paper Article";
		load3 = true;
	}


	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && lifeinsurancePaper && !bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket3 = "Life Insurance Paper";
		load3 = true;
	}

	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && bankdebtNotes && !sleepingPills && !contractDocument)
	{
		pocket3 = "Bank Debt Notes";
		load3 = true;
	}

	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && sleepingPills && !contractDocument)
	{
		pocket3 = "Sleeping Medication Pills";
		load3 = true;
	}

	else if (!cellPhone && !beerCan && !rainCoat && !minitureEiffeltower && !humanAnatomyBook && !driverResume && !newsPaper && !lifeinsurancePaper && !bankdebtNotes && !sleepingPills && contractDocument)
	{
		pocket3 = "Contract Document";
		load3 = true;
	}



	// limit pocket to 3 items
	if (load1 == false && load2 == false && load3 == false)
	{
		pocketFull = false;
	}

	else if (load1 == true && load2 == false && load3 == false)
	{
		pocketFull = false;
	}

	else if (load1 == false && load2 == true && load3 == false)
	{
		pocketFull = false;
	}

	else if (load1 = false && load2 == false && load3 == true)
	{
		pocketFull = false;
	}

	else if (load1 == true && load2 == true && load3 == false)
	{
		pocketFull = false;
	}

	else if (load1 == false && load2 == true && load3 == true)
	{
		pocketFull = false;
	}

	else if (load1 == true && load2 == false && load3 == false)
	{
		pocketFull = false;
	}

	else if (load1 == true && load2 == true && load3 == true)
	{
		pocketFull = true;
	}




	// 3 key items
	if (rainCoat && bankdebtNotes && minitureEiffeltower)
	{

		keyitemFound = true;

	}


	*/

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