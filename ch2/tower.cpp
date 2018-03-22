//
// Created by Ryan Chacon on 3/22/18.
//
#import <iostream>
#include "constants.h"

double getTowerHeight()
{
    std::cout << "Tower Height: ";
    double towerHeight;
    std::cin >> towerHeight;
    return towerHeight;
}

void distanceFallen(double towerHeight, int seconds)
{
    double height = towerHeight - (constants::my_gravity * (seconds * seconds))/2;
    if (height > 0 )
        std::cout << height << std::endl;
    else
        std::cout << "Ground" << std::endl;
}