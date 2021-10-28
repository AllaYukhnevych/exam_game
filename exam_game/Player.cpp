#include "Player.h"

Player::Player(int ID, std::string Name, int Rank)
{
    this->ID = ID;
    this->Name = Name;
    this->Rank = Rank;
}

//список гравц≥в
std::list<Player>players
{
   Player(1, "Dendi", 0),
   Player(2, "Iceberg", 0),
   Player(3, "SumaiL", 0),
   Player(4, "Topson", 0),
   Player(5, "Puppey", 0),
   Player(6, "Crystallize", 0),
   Player(7, "GeneRaL", 0),
   Player(8, "Yatoro", 0),
   Player(9, "Arteezy", 0),
   Player(10, "Pikachu", 0),
   Player(11, "MagicaL", 0),
   Player(12, "Miroslaw", 0),
   Player(13, "Ghostik", 0),
   Player(14, "Nisha", 0),
   Player(15, "Malik", 0),
   Player(16, "Alex", 0),
   Player(17, "Seleri", 0),
   Player(18, "Misha", 0),
   Player(19, "Vasko", 0),
   Player(20, "Venso", 0),
};

//створенн€ гравц€
void Player::CreatePlayer(Player& new_player)
{
    players.push_back(new_player);
}
