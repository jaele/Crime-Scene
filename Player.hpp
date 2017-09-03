#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Character.hpp"


// main character that player will be using

class Player :public Character
{

private:


	//items to investigate
	bool cellPhone;
	bool beerCan;
	bool rainCoat;
	bool minitureEiffeltower;
	bool humanAnatomyBook;
	bool driverResume;
	bool newsPaper;
	bool lifeinsurancePaper;
	bool bankdebtNotes;
	bool sleepingPills;
	bool contractDocument;



public:
	Player();


	void setcellPhone(bool);
	void setbeerCan(bool);
	void setrainCoat(bool);
	void setminitureTower(bool);
	void setAnatomyBook(bool);
	void setdriverResume(bool);
	void setnewsPaper(bool);
	void setlifeinsurancePaper(bool);
	void setbankdebtNotes(bool);
	void setsleepingPills(bool);
	void setcontractDocument(bool);
	
	
	bool getcellPhone();
	bool getbeerCan();
	bool getrainCoat();
	bool getminitureTower();
	bool getAnatomyBook();
	bool getdriverResume();
	bool getnewsPaper();
	bool getlifeinsurancePaper();
	bool getbankdebtNotes();
	bool getsleepingPills();
	bool getcontractDocument();
	

	void checkPocket();

};


#endif

