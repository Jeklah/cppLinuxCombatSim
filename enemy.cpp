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
