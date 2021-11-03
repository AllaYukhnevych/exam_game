#pragma once
#include "PlayerManager.h"
#include "HeroManager.h"
#include "Team.h"
#include <iostream>

class TeamManager
{
public:
	TeamManager()
	{}

	Team GenerateNewTeam(std::string TeamName);

	void GetTeamInfo(Team& team);
};

