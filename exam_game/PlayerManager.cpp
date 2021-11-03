#include "PlayerManager.h"

//створенн€ нового гравц€
Player PlayerManager::CreatePlayer(Player& new_player)
{
	int id;
	std::string name;
	int randplayerRank = rand() % 100;
	std::cout << "Enter name ";
	std::cin >> name;
	std::cout << "Enter ID ";
	std::cin >> id;
	std::cout << "Rank " << randplayerRank << "\n";

	new_player.ID = id;
	new_player.Name = name;
	new_player.Rank = randplayerRank;

	this->playresList.push_back(new_player);

	return new_player;
}

Player PlayerManager::GetPlayerByName(std::string name)
{
		for (int i = 0; i < playresList.size(); i++)
		{
			if (playresList[i].GetName() == name)
			return playresList[i];
		}
}

Player PlayerManager::GetPlayerById(int id)
{
	for (int i = 0; i < playresList.size(); i++)
	{
		if (playresList[i].GetId() == id)
			return playresList[i];
	}
}

void PlayerManager::ShowPlayerInfo(Player player)
{
	std::cout << "ID\t"<< player.GetId() << "\tName\t" << player.GetName() << "\tRank\t" << player.GetRank() << "\n";
}

void PlayerManager::DeletePlayer(int index)
{
	std::vector<Player>::iterator iterator = playresList.begin();
	std::advance(iterator, index);
	playresList.erase(iterator);
}

//рандомний виб≥р гравц€
Player PlayerManager::RandPlayer(Player* playerlist)
{
	srand((unsigned)time(NULL));
	int a;
	a = rand() % sizeof(playerlist);
	Player player = playresList[a];
	DeletePlayer(a);
	return player;
}
