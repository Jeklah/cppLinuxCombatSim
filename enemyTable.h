#pragma once

#include <vector>
#include <string>
#include "enemy.h"

class enemyTable{
    public:
        enemyTable();
        ~enemyTable();

        int getHP(int enemyID);
        enemy* getEnemy(int id);

        void addEnemy(enemy* newEnemy);

    private:
        std::vector<enemy*> enemies;
};
