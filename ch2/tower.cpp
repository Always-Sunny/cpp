//
// Created by Ryan Chacon on 3/22/18.
//
#import <iostream>
#include "constants.h"

double getTowerHeight()
{
    std::cout << "Enter the initial height of the tower in meters: \n";
    double towerHeight;
    std::cin >> towerHeight;
    return towerHeight;
}


double distanceFallen(double seconds, double towerHeight)
{
    double distanceFallen = (constants::my_gravity * (seconds * seconds)) / 2;
    double currentHeight = towerHeight - distanceFallen;

    return currentHeight;
}

void printDistance(double height, int seconds)
{
    if (height > 0.0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
    else
        std::cout << "At " << seconds << " seconds, the ball is on the ground.";
}

void calculateAndPrintResults(double towerHeight, int seconds)
{
    double height = distanceFallen(seconds, towerHeight);
    printDistance(height, seconds);
}