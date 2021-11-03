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

    // ��������� �������� ������� HP
    int GetTeamHP(Team& team);
    // ��������� �������� ������� Damage
    int GetTeamDamage(Team& team);

    void CalculateWinner();

};

