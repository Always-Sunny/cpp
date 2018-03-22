//
// Created by Ryan Chacon on 3/22/18.
//
#include <iostream>

int readNumber()
{
    int x;
    std::cout << "Pick a number: ";
    std::cin >> x;
    return x;
}

void returnAnswer(int x, int y)
{
    std::cout << x << " + " << y  << " = " << x + y <<std::endl;
}