#include "item.h"

// Creating the item class to have some stuff to add to the inventory object.
// Defining the stats from the parameters and the function return values.
item::item(std::string name, int id, int weight, int mainStat, int offStat, int minorStat):
    name(name),
    id(id),
    weight(weight),
    mainStat(mainStat),
    offStat(offStat),
    minorStat(minorStat)
{
}

std::string item::getName() {
    return name;
}

int item::getWeight() {
    return weight;
}

int item::getMainStat() {
    return mainStat;
}

int item::getOffStat() {
    return offStat;
}

int item::getMinorStat() {
    return minorStat;
}

int item::getID() {
    return id;
}
