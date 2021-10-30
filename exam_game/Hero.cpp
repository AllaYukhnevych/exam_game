#include "Hero.h"

Hero::Hero(int ID, std::string Name, int HP, int Damage)
{
    this->ID = ID;
    this->Name = Name;
    this->HP = HP;
    this->Damage = Damage;
}

std::string Hero::getHeroName(Hero& hero) const
{
    return hero.Name;
}

int Hero::GetHeroById(Hero& hero) const
{
    return hero.ID;
}

int Hero::GetHeroByDamage(Hero& hero) const
{
    return hero.Damage;
}

