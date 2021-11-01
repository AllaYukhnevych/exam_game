#include "Player.h"
#include <ostream>

std::string Player::GetName(std::string name)
{
	return Name;
}

int Player::GetId()
{
	return ID;
}

int Player::GetRank()
{
	return Rank;
}
