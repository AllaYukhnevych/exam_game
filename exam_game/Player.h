#pragma once
#include <iostream>
#include <string>
#include <vector>



class Player
{
public:
    int ID = 0;
    std::string Name;
    int Rank = 0;
    

    Player ()
    {}

    Player(int id, std::string name, int rank)
    { 
        this->ID = id;
        this->Name = name;
        this->Rank = rank;
    };

    std::string GetName();
    int GetId();
    int GetRank();

    //��������� �� ��������
    void SetRank(int newRank);

    friend std::ostream& operator<< (std::ostream& out, const Player& player);
};






