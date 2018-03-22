#include <iostream>
#include "io.h"

int main() {
    std::cout << "Let's add two numbers together!" << std::endl;
    int x = readNumber();
    int y = readNumber();
    returnAnswer(x, y);
    return 0;
}