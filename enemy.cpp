#pragma once

#include <iostream>
#include <string>
#include "enemy.h"

enemy::enemy(string name, int str, int def, int hp, int diff, int enemyID, int hit) :
    name(name),
    str(str),
    def(def),
    diffclty(diff),
    hp(hp),
    enemyID(enemyID),
    hitChance(hit)

{
}

int enemy::getHit() {
    return hit;
}

string enemy::getName() {
    return name;
}

int enemy::getHP() {
    return hp;
}

double enemy::giveXP() {
    return diffclty * 0.5;
}

int enemy::attack(int defence) {
    int attackPoints;
    attackPoints = (str + diffclty) - defence;

    if (attackPoints)
}
