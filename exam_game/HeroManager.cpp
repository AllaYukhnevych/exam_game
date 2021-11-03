#include "HeroManager.h"




//створення героя
Hero HeroManager::CreateHero(Hero new_hero)
{
	int id;
	std::string name;
	int randHeroHP = rand() % 100;
	int randHeroDamage = rand() % 100;

	std::cout << "Enter name ";
	std::cin >> name;
	std::cout << "Enter ID ";
	std::cin >> id;
	std::cout << "HP " << randHeroHP << "\n";
	std::cout << "Damage " << randHeroHP << "\n";

	new_hero.ID = id;
	new_hero.Name = name;
	new_hero.HP = randHeroHP;
	new_hero.Damage = randHeroDamage;

	this->heroesList.push_back(new_hero);

	return new_hero;
}

Hero HeroManager::GetHeroByName(std::string name)
{
	for (int i = 0; i < heroesList.size(); i++)
	{
		if (heroesList[i].GetName() == name)
		return heroesList[i];
	}
}

Hero HeroManager::GetHeroByById(int id)
{
	for (int i = 0; i < heroesList.size(); i++)
	{
		if (heroesList[i].GetId() == id)
			return heroesList[i];
	}
}

void HeroManager::ShowHeroInfo(Hero hero)
{
	std::cout << "ID\t" << hero.GetId() << "\tName\t" << hero.GetName() << "\tHP\t" << hero.GetHP() << "\tDamage\t" << hero.GetDamage() << "\n";
}

void HeroManager::DeleteHero(int index)
{
	std::vector<Hero>::iterator iterator = heroesList.begin();
	std::advance(iterator, index);
	heroesList.erase(iterator);
}

//рандомний вибір героя
Hero HeroManager::RandHero(Hero* herolist)
{
	srand((unsigned)time(NULL));
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	Hero hero = heroesList[(rand() % sizeof(herolist))];
	return hero;
}







