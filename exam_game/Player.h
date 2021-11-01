#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <string>

class Player
{
private:
    int ID = 0;
    std::string Name;
    int Rank = 0;
    
public:
    Player ()
    {}

    Player(int id, std::string name, int rank)
    { 
        this->ID = id;
        this->Name = name;
        this->Rank = rank;
    };


    std::string GetName(std::string name);
    int GetId();
    int GetRank();


};






