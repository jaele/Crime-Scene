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



	bool keyitemFound;
	bool arrestedMurderer;


	bool load1;
	bool load2;
	bool load3;

	bool pocketFull;



	bool arrestJane;
	bool arrestHenry;
	bool arrestMartha;
	bool arrestJames;
	bool arrestCharlie;
	bool arrestCynthia;


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
	void setload1(bool);
	void setload2(bool);
	void setload3(bool);
	void setpocketFull(bool);

	void setarrestJane(bool);
	void setarrestHenry(bool);
	void setarrestMartha(bool);
	void setarrestJames(bool);
	void setarrestCharlie(bool);
	void setarrestCynthia(bool);




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
	bool getload1();
	bool getload2();
	bool getload3();
	bool getpocketFull();


	bool getarrestJane();
	bool getarrestHenry();
	bool getarrestMartha();
	bool getarrestJames();
	bool getarrestCharlie();
	bool getarrestCynthia();



	void checkPocket();

};


#endif

