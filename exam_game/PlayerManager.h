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
         Player(1, "Dendi", (rand() % 100)), Player(3, "SumaiL", (rand() % 100)), Player(4, "Topson", (rand() % 100)),
         Player(5, "Puppey", (rand() % 100)), Player(6, "Crystal", (rand() % 100)), Player(7, "GeneRaL", (rand() % 100)),
         Player(8, "Yatoro", (rand() % 100)), Player(9, "Arteezy", (rand() % 100)), Player(10, "Pikachu", (rand() % 100)),
         Player(11, "MagicaL", (rand() % 100)), Player(12, "Miros", (rand() % 100)),Player(13, "Ghostik", (rand() % 100)),         Player(14, "Nisha", (rand() % 100)), Player(15, "Malik", (rand() % 100)), Player(16, "Alex", (rand() % 100)), Player(17, "Seleri", 0),
         Player(18, "Misha", (rand() % 100)), Player(19, "Vasko", (rand() % 100)), Player(20, "Venso", (rand() % 100)) };

     std::vector<Player>one_playresList{
         Player(1, "Dendi", (rand() % 100)), Player(3, "SumaiL", (rand() % 100)), Player(4, "Topson", (rand() % 100)),
         Player(5, "Puppey", (rand() % 100)), Player(6, "Crystal", (rand() % 100)), Player(7, "GeneRaL", (rand() % 100)),
         Player(8, "Yatoro", (rand() % 100)), Player(9, "Arteezy", (rand() % 100)), Player(10, "Pikachu", (rand() % 100))};

    PlayerManager() {}

    PlayerManager(Player& players) 
    { 
    players: this->playresList;
    }


    Player CreatePlayer(Player& new_player);

    Player GetPlayerByName(std::string name);

    Player GetPlayerById(int id);

    void DeletePlayer(int index);

    Player RandPlayer();

    Player RandPlayerOne();

   

    void  ShowPlayerInfo(Player  player);

};
