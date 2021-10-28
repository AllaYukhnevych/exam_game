#pragma once
#include <iostream>
#include <string>
#include <list>


class Player
{
public:
    int ID = 0;
    std::string Name;
    int Rank = 0;
    std::list<Player>players;

    //конструктор за замовчуванням
    Player()
    {
    };

    Player(int ID, std::string Name, int Rank);

    // створення гравця
    
    void CreatePlayer(Player& new_player);

};

