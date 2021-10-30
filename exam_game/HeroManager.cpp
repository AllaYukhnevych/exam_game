#include "HeroManager.h"



void HeroManager::CreateHero(Hero& new_hero)
{
    this->hero.push_back(new_hero);
}

void HeroManager::DeleteHero(int index)
{
    std::vector<Hero>::iterator iterator = hero.begin();
    std::advance(iterator, index);
    hero.erase(iterator);
}

void HeroManager::Print()
{
    for (auto hero : hero)
        std::cout << "Name\t" << hero.Name << "\tID\t" << hero.ID << "\tHP\t" << hero.HP << "\tDamage\t" << hero.Damage << std::endl;
}

int HeroManager::ShowPlayerInfo(Hero& hero) const
{
    return hero.Damage, hero.HP;
}









