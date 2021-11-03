#pragma once
#include <ctime>
#include <chrono>
#include <time.h>
#include <thread>
#include "Player.h"

class PlayerManager : public Player
{
    public:
     std::vector<Player>playresList { 
         Player(1, "Dendi", 0), Player(3, "SumaiL", 0), Player(4, "Topson", 0), Player(5, "Puppey", 0), 
         Player(6, "Crystal", 0), Player(7, "GeneRaL", 0), Player(8, "Yatoro", 0), Player(9, "Arteezy", 0),
         Player(10, "Pikachu", 0),  Player(11, "MagicaL", 0), Player(12, "Miros", 0),Player(13, "Ghostik", 0),
         Player(14, "Nisha", 0), Player(15, "Malik", 0), Player(16, "Alex", 0), Player(17, "Seleri", 0), 
         Player(18, "Misha", 0), Player(19, "Vasko", 0), Player(20, "Venso", 0) };

    PlayerManager() {}

    PlayerManager(Player& players) 
    { 
    players: this->playresList;
    }


    Player CreatePlayer(Player& new_player);

    Player GetPlayerByName(std::string name);

    Player GetPlayerById(int id);

    void DeletePlayer(int index);

    Player RandPlayer(Player* playerlist);

    void  ShowPlayerInfo(Player  player);

};
