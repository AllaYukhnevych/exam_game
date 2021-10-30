#pragma once
#include "Hero.h"
#include<vector>

class HeroManager : public Hero
{
public:

	std::vector<Hero>hero
	{ Hero(1, "Abaddon", 21, 11),
	  Hero(2, "Bane", 22, 11),
	  Hero(3, "Werk",23,13) };

	HeroManager()
	{}
	HeroManager(Hero& hero)
	{
	hero : this->hero;
	};

	void CreateHero(Hero& new_hero);
	void DeleteHero(int index);
	void Print();
	int ShowPlayerInfo(Hero& hero) const;
};

