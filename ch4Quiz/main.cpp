#include <iostream>

enum class MonsterType
{
    DRAGON,
    OGRE,
    TROLL,
    GOBLIN,
    SKELETON,
};

struct Monster
{
    MonsterType type;
    std::string name;
    int health;
};
std::string getMonsterType(Monster monster)
{
    if (monster.type == MonsterType::DRAGON)
        return "Dragon";
    if (monster.type == MonsterType::GOBLIN)
        return "Goblin";
    if (monster.type == MonsterType::OGRE)
        return "Ogre";
    if (monster.type == MonsterType::TROLL)
        return "Troll";
    if (monster.type == MonsterType::SKELETON)
        return "Skeleton";
    return "Unknown";
}
void printMonster(Monster monster)
{
    // With enum classes, the compiler will no longer implicitly convert enumerator values to integers.
    std::cout << "A " << getMonsterType(monster) << " Named " << monster.name
              << " with a health of " << monster.health << "." << std::endl;
}


int main() {
    Monster dragon = {MonsterType::DRAGON, "Saphira", 100 };
    Monster goblin = {MonsterType::GOBLIN, "Rover", 70 };
    printMonster(dragon);
    printMonster(goblin);
    return 0;
}

//if an enumeration is needed in multiple files, it is fine to define the enumeration in a header,
//and #include that header wherever needed.