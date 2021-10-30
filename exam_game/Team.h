#pragma once
#include "Player.h"

class Team : public Player
{
public:

	Team()
	{
	}

	Team(std::string name)
	{
		this->Name = name;
	}


};

