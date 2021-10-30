#pragma once
#include "Player.h"

class Hero : public Player
{
public:
    int HP = 0;
    int Damage = 0;

    Hero()
    {
    }
    //конструктор
    Hero(int ID, std::string Name, int HP, int Damage);
    std::string getHeroName(Hero& hero) const;
    int GetHeroById(Hero& hero) const;
    int GetHeroByDamage(Hero& hero) const;


};