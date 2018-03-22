//
// Created by Ryan Chacon on 3/22/18.
//
#include <iostream>


double enterDouble()
{
    std::cout << "Enter double: ";
    double x;
    std::cin >> x;
    return x;
}
char enterOperand()
{
    std::cout << "Enter one of the following: +, -, *, or /: * ";
    char o;
    std::cin >> o;
    return o;
}

void printResult(double x, double y, char o)
{
    if (o == '+')
        std::cout << x+y << std::endl;
    else if (o == '-')
        std::cout << x-y << std::endl;
    else if (o == '*')
        std::cout << x*y << std::endl;
    else if (o == '/')
        std::cout << x/y << std::endl;
    else
        std::cout << "Got nothing for ya" << std::endl;
}