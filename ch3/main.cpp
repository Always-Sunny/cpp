#include <iostream>
#include <bitset>

int pickAnInt()
{
    std::cout << "Enter an integer: " << std::endl;
    int x;
    std::cin >> x;
    return x;
}

void isEven(int x)
{
    if (x % 2 == 0)
        std::cout << "The number is even!";
    else
        std::cout << "The number is odd!";
}

const int option0 = 0;
const int option1 = 1;
const int option2 = 2;
const int option3 = 3;
const int option4 = 4;
const int option5 = 5;
const int option6 = 6;
const int option7 = 7;

int main() {
    int x = pickAnInt();
    isEven(x);
    std::bitset<8> bits(0x2); // we need 8 bits, start with bit pattern 0000 0010
    bits.set(option4); // set bit 4 to 1 (now we have 0001 0010)
    bits.flip(option5); // flip bit 5 (now we have 0011 0010)
    bits.reset(option5); // set bit 5 back to 0 (now we have 0001 0010)

    std::cout << "Bit 4 has value: " << bits.test(option4) << '\n';
    std::cout << "Bit 5 has value: " << bits.test(option5) << '\n';
    std::cout << "All the bits: " << bits << '\n';

    return 0;
}

//============== RULES ==============//

//Rule: If your expression uses different operators, use parenthesis to make it clear how the expression should evaluate, even if they are technically unnecessary.
//Rule: Favor pre-increment and pre-decrement over post-increment and post-decrement. The prefix versions are not only more performant, you’re less likely to run into strange issues with them.
//Rule: Don’t use a variable that has a side effect applied to it more than once in a given statement. If you do, the result may be undefined.
//Rule: Avoid using the comma operator, except within for loops.
//Rule: Only use the conditional operator for simple conditionals where it enhances readability.
//Rule: If logical NOT is intended to operate on the result of other operators, the other operators and their operands need to be enclosed in parenthesis.
//Rule: It’s a good idea to always use parenthesis to make your intent clear -- that way, you don’t even have to remember the precedence rules.
//When evaluating bitwise OR, if any bit in a column is 1, the result for that column is 1.
//When evaluating bitwise AND, if all bits in a column are 1, the result for that column is 1.
//When evaluating bitwise XOR, if there are an odd number of 1 bits in a column, the result for that column is 1.