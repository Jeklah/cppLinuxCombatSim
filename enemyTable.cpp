#include <string>
#include "enemy.h"
#include "enemyTable.h"

enemyTable::enemyTable() {}

//New'd elsewhere but they need to be deleted. Use smart pointer here.
enemyTable::~enemyTable() {}

int enemyTable::getHP(int enemyID) {
    return enemies[enemyID]->getHP();
}

void enemyTable::addEnemy(enemy* enemy){
    enemies.push_back(enemy);
}

enemy* enemyTable::getEnemy(int id) {
    enemy* giveEnemy = enemies[id];
    return giveEnemy;
}
