#include <iostream>
#include <typeinfo>

namespace Ra
{
    int car = 4;
};

enum Names {
    NAMES_RYAN,
    NAMES_ERIK,
};

enum MonsterType
{
    MONSTER_ORC,
    MONSTER_GOBLIN,
    MONSTER_TROLL,
    MONSTER_OGRE,
    MONSTER_SKELLETON,
};

void printName(Names name)
{
    if (name == NAMES_RYAN)
        std::cout << "Ryan" << std::endl;
    else if (name == NAMES_ERIK)
        std::cout << "Erik";
}

int main() {

    std::cout << Ra::car << std::endl; // print 4

    struct Person
    {
        short id;
        int age;
        double wage;
    };

    Person ryan;
    ryan.id = 33;
    ryan.age = 22;
    ryan.wage = 12.00;

    std::cout << ryan.id << ryan.age << ryan.wage << std::endl; //print 332212


    typedef int64_t ryan64_t;
    ryan64_t ohryan(33);
    std::cout << ohryan << std::endl; // print 33

    using erik24_t = int;
    erik24_t erik = 24;
    std::cout << erik << std::endl; // print 24

    float f(5);
    std::cout << typeid(f).name() << " " << f << std::endl; // show us the type of a + b

    char a('a');
    std::cout << a << std::endl; // printa

    int i = 100;
    i = static_cast<int>(i / 2.5);
    std::cout << typeid(i).name() << i << std::endl; // print i40

    std::cout << "Enter your name: " << std::endl;
    std::string myName;
    std::getline(std::cin, myName);
    std::cout << myName << std::endl;

    std::cout << "Enter your age: " << std::endl;
    int myAge;
    std::cin >> myAge;
    std::cout << myAge << std::endl;

    int letters;
    letters = myName.length();
    double agePerLetter = static_cast<double>(myAge) / letters;
    std::cout << "You've lived " << agePerLetter << " years for each letter in your name!" << std::endl;

    printName(NAMES_RYAN); //look at function argument

    MonsterType monsterType = MONSTER_TROLL;
    if (monsterType == MONSTER_TROLL)
        std::cout << "Troll" << std::endl;

    enum class Color
    {
        RED,
        BLUE
    };

    Color color = Color::BLUE;

//    std::cout << color; // won't work, because there's no implicit conversion to int with enum class
    std::cout << static_cast<int>(color); // will print 1

    return 0;

}

//Rule: Avoid using nested variables with the same names as variables in an outer block. (Don't shadow)
//Rule: Define variables in the smallest scope possible.
//use of non-const global variables should generally be avoided
//Rule: Use local variables instead of global variables whenever reasonable, and pass them to the functions that need them.
//Rule: Avoid “using” statements outside of a function (in the global scope).
//Suggestion: We recommend you avoid “using directives” entirely.
//Rule: Avoid const casts and reinterpret casts unless you have a very good reason to use them.
//Rule: Avoid C-style casts
//Rule: If reading numeric values with std::cin, it’s a good idea to remove the extraneous newline using std::cin.ignore().
//Best practice: Don’t assign specific values to your enumerators.
//Rule: Don’t assign the same value to two enumerators in the same enumeration unless there’s a very good reason.x`x`x`
//Rule: Favor type aliases over typedefs if your compiler is C++11 compatible.




//// Uninitialized definition:
//int g_x;        // defines uninitialized global variable (external linkage)
//static int g_x; // defines uninitialized static variable (internal linkage)
//const int g_x;  // not allowed: const variables must be initialized
//
//// Forward declaration via extern keyword:
//extern int g_z;       // forward declaration for global variable defined elsewhere
//extern const int g_z; // forward declaration for const global variable defined elsewhere
//
//// Initialized definition:
//int g_y(1);        // defines initialized global variable (external linkage)
//static int g_y(1); // defines initialized static variable (internal linkage)
//const int g_y(1);  // defines initialized static variable (internal linkage)
//
//// Initialized definition w/extern keyword:
//extern int g_w(1);       // defines initialized global variable (external linkage, extern keyword is redundant in this case)
//extern const int g_w(1); // defines initialized const global variable (external linkage)
