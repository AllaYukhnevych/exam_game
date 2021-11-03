#pragma once
#include "Hero.h"
#include <ctime>
#include <chrono>
#include <time.h>
#include <thread>
#include<vector>
#include <iostream>


class HeroManager
{
public:
	std::vector<Hero>heroesList
	{ Hero(1, "Abaddon", (rand() % 100), (rand() % 100)), Hero(2, "Wwerk", (rand() % 100), (rand() % 100)),
	Hero(3, "Bane", (rand() % 100), (rand() % 100)) , Hero(4, "Dazzle", (rand() % 100), (rand() % 100)) ,
	Hero(5, "Spirit", (rand() % 100), (rand() % 100)) , Hero(6, "Hoodwink", (rand() % 100), (rand() % 100)) ,
	Hero(7, "Oracle", (rand() % 100), (rand() % 100)) , Hero(8, "Tiny", (rand() % 100), (rand() % 100)),
	Hero(9, "Lich", (rand() % 100), (rand() % 100)), Hero(10, "Visage", (rand() % 100), (rand() % 100)),
	Hero(11, "Stalker", (rand() % 100), (rand() % 100)), Hero(12, "Zeus", (rand() % 100), (rand() % 100)),
	Hero(13, "Sniper", (rand() % 100), (rand() % 100)), Hero(14, "Dark", (rand() % 100), (rand() % 100)),
	Hero(15, "Luna", (rand() % 100), (rand() % 100)), Hero(16, "Medusa", (rand() % 100), (rand() % 100)),
	Hero(17, "Ursa", (rand() % 100), (rand() % 100)), Hero(18, "Warlock", (rand() % 100), (rand() % 100)),
	Hero(19, "Kunkka", (rand() % 100), (rand() % 100)), Hero(20, "Pudge", (rand() % 100), (rand() % 100))
	};

	HeroManager()
	{}

	Hero CreateHero(Hero new_hero);
	Hero GetHeroByName(std::string name);
	Hero GetHeroByById(int id);
	
	void ShowHeroInfo(Hero hero);

	void DeleteHero(int index);

	Hero RandHero(Hero* herolist);

};

