#include "Hero.h"

Hero::Hero(int id, std::string name, int HP, int damage)
{
    this->ID = ID;
    this->Name = Name;
    this->HP = HP;
    this->Damage = Damage;
}

std::string Hero::GetName(std::string name)
{
    return Name;
};

int Hero::GetId()
{
    return ID;
};

int Hero::GetDamage()
{
    return Damage;
}
int Hero::GetHP()
{
    return HP;
}