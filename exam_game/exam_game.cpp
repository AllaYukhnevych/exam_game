#include <iostream>
#include <string>
#include <list>
#include "Player.h"


int main()
{
    //створення нового гравця
    int id = 0;
    std::string name;
    int rank = 0;
    std::cout << "Enter ID " << "\n";
    std::cin >> id;
    std::cout << "Enter Name " << "\n";
    std::cin >> name;
    std::cout << "Enter Rank " << "\n";
    std::cin >> rank;

    Player pl(id, name, rank);
    pl.CreatePlayer(pl);
   
}


