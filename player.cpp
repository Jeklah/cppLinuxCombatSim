#include "player.h"
#include "inventory.h"

// Creating the player.
player::player(std::string name, int startStr, int startAgi, int startInt):
    name(name),
    strength(startStr),
    agility(startAgi),
    intelligence(startInt)
{
    lvl = 0;
    xp = 0;
    health = strength * 3;
    hitChance = 0.5;
}

int player::heal() {
    std::cout << "\n I'm healing, watch my back!" << std::endl;
    return (intelligence / 2) + 3;
}

int player::gainXP() {
    return (lvl /10);
}

std::string player::getName() {
    return name;
}

int player::getHP() {
    return health;
}

int player::getInt() {
    return intelligence;
}

int player::getAgi() {
    return agility;
}

int player::getStr() {
    return strength;
}

int player::getLvl() {
    return lvl;
}

int player::getDef() {
    return def;
}

int player::getInvSize() {
    return *playersInv->getInvSize();
}

inventory player::createInv(itemTable* itemsTable, int invSize) {
    playersInv = new inventory(itemsTable, invSize);
}

void player::setClass(int classChoice) {
    switch (classChoice) {
        case 1:
            {
                clss = "Warrior";
                classID = 1;
            }
            break;

        case 2:
            {
                clss = "Ranger";
                classID = 2;
            }
            break;

        case 3:
            {
                clss = "Wizard";
                classID = 3;
            }
            break;
    }
}

void player::setDef(int classChoice) {
    switch (classChoice) {
        case 1:
            {
                def = player::getAgi() / 2;
            }
            break;

        case 2:
            {
                def = player::getAgi() / 2;
            }
            break;
        case 3:
            {
                def = 2;
            }
            break;
    }
}

int player::getClassID() {
    return player::classID;
}
