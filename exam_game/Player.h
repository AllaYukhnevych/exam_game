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

    //����������� �� �������������
    Player()
    {
    };

    Player(int ID, std::string Name, int Rank);

    // ��������� ������
    
    void CreatePlayer(Player& new_player);

};

