#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <string>

class Player
{
public:
    int ID = 0;
    std::string Name;
    int Rank = 0;

    //конструктор за замовчуванням
    Player()
    {

    };

    Player(int iD, std::string name, int rank)
    {
        this->ID = iD;
        this->Name = name;
        this->Rank = rank;
    };
    std::string getPlayerName(std::string name) const;
    long getCurrentId() const;


};






