#include "enemy.h"

enemy::enemy(std::string name, int str, int def, int hp, int diff, int enemyID, int hit) :
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
    return hitChance;
}

std::string enemy::getName() {
    return name;
}

int enemy::getHP() {
    return hp;
}

double enemy::giveXP() {
    return diffclty * 0.5;
}

int enemy::attack(int defence) {
    int attackDmg;
    attackDmg = (str + diffclty) - defence;

    if (attackDmg <= 0){
        std::cout << "You missed!" << std::endl;
    } else {
        std::cout << "You hit for " << attackDmg << std::endl;
    }
    return attackDmg;
}

void enemy::defend(int attacker){
    if (def == attacker) { std::cout << "The hit grazed the enemy for 1 dmg."; hp--; }
    if (def > attacker) {
        std::cout << "The attack was blocked!" << std::endl;
    } else {
        std::cout << "The attack hit successfully! It did " << (attacker - diffclty) << " damage!" << std::endl;
    }
}

int enemy::getDiff() {
    return diffclty;
}

int enemy::getStr(){
    return str;
}

int enemy::getDef(){
    return def;
}
