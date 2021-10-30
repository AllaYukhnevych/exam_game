#include "PlayerManager.h"

//��������� �������
void PlayerManager::CreatePlayer(Player& new_player)
{
    this->players.push_back(new_player);
}
//��������� �������
void PlayerManager::DeletePlayer(int index)
{
    std::vector<Player>::iterator iterator = players.begin();
    std::advance(iterator, index);
    players.erase(iterator);
}
//���� �������
void PlayerManager::Print()
{
    for (auto player : players)
        std::cout << "Name\t" << player.Name << "\tID\t" << player.ID << "\tRank\t" << player.Rank << std::endl;
}

int PlayerManager::ShowPlayerInfo(Player& player) const
{
    return player.Rank;
}




