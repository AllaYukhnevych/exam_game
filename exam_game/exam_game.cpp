#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "PlayerManager.h"
#include "HeroManager.h"
#include "TeamManager.h"


template <class Type, class Type1, class Type2>
void CopyArray(std::vector<Type1>player, std::vector<Type2>hero)
{
    Type arr[5][2];
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i][0] = player[1] << "\t";
        for (int j = 1; j < 2; j++)
        {
            std::cout << arr[i][1] = hero[2] << "\t";
        }
        std::cout << "\n";
    }
}


int main()
{
    //вивід гравців
    PlayerManager pm;
    //створення гравця
    Player p1(22, "Mem", 44);
    Hero hr(4, "Abaddon", 24, 14);
    std::cout << "List of players \n";
    pm.CreatePlayer(p1);
    pm.Print();
    std::cout << "\n" << "\n";
    std::cout << p1.getCurrentId();
    std::cout << "\n" << "\n";
    std::cout << "List of hero \n";
    HeroManager hm;
    hm.Print();
    std::vector<Hero>hero
    { Hero(1, "Abaddon", 21, 11),
      Hero(2, "Bane", 22, 11),
      Hero(3, "Werk",23,13) };

    std::vector<Player>players
    { Player(1, "Dendi", 0),
   Player(2, "Iceberg", 0),
   Player(3, "SumaiL", 0),
   Player(4, "Topson", 0),
   Player(5, "Puppey", 0) };








    //добавити запит про додавання гравця

}
