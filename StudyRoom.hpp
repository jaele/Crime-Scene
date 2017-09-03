#ifndef STUDYROOM_HPP
#define STUDYROOM_HPP

#include "Mansion.hpp"
#include "Game.hpp"

class StudyRoom : public Mansion
{
	
private:
	// pointers to study room
	StudyRoom *east;
	StudyRoom *west;
	StudyRoom *north;
	StudyRoom *south;

public:
	
	StudyRoom();

	bool specialFunction(Player &);

};



#endif