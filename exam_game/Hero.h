#pragma once
#include "Player.h"

class Hero : public Player
{
private:
    std::string Name;
    int ID;
    int HP;
    int Damage;

public:
    Hero()
    {
    }

    //конструктор
    Hero(int ID, std::string Name, int HP, int Damage);
    
    std::string GetName(std::string name);
    int GetId();

    int GetDamage();
    int GetHP();

  

};