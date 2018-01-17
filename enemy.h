#pragma once

#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <string>

class enemy{
    private:
        string name;
        int def;
        int hp;
        int diffclty;
        int enemyID;
        int hitChance;

    public:
        enemy(string name, int str, int def, int hp, int diff, int enemyID, int hit);
        string getName();
        int attack(int defence);
        int getHP();
        void defend(int attacker);
        double giveXP();
        int getDiff();
        int getStr();
        int getDef();
        int getHit();

};

#endif

