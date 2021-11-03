#include "TeamManager.h"

// створення команди
Team TeamManager::GenerateNewTeam(std::string TeamName)
{
	PlayerManager playermanager = PlayerManager();
	HeroManager heromanager = HeroManager();

	Player newPlayerlist[5];
	Hero newHerolist[5];

	for (int i = 0; i < 5; i++)
	{
		newPlayerlist[i] = playermanager.RandPlayer(newPlayerlist);
		std::cout << newPlayerlist[i] << "\n";
		newHerolist[i] = heromanager.RandHero(newHerolist);
		std::cout << newHerolist[i] << "\n\n";
	}

	Team team(TeamName, newPlayerlist, newHerolist);
	return team;
}

//інформація про команду
void TeamManager::GetTeamInfo(Team& team)
{
	PlayerManager playermanager = PlayerManager();
	HeroManager heromanager = HeroManager();

	std::cout << "Team: " << team.Name << "\n";
	std::cout << "Players" << "\n";
	for (auto element : team.Playerslist)
	{
		playermanager.ShowPlayerInfo(element);
	}

	std::cout <<  "Heroes" << "\n";
	for (auto element : team.Heroeslist)
	{
		heromanager.ShowHeroInfo(element);
	}
}