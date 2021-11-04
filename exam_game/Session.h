#pragma once
#include <ctime>
#include "Team.h"

class Session
{
public:
    time_t StartTime = time(0);
    Team Winner;
    Team TeamOne;
    Team TeamTwo;
    Team Loser;

    Session() {}

    // підрахунок загальної кількості HP
    int GetTeamHP(Team& team);
    // підрахунок загальної кількості Damage
    int GetTeamDamage(Team& team);

    void CalculateWinner();

};

