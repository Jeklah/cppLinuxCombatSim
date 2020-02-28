#pragma once

#include <iostream>
#include "inventory.h"

// Check inventory.h for comments. Same.

class player {
    private:
        std::string clss;
        int health;
        int intelligence;
        int strength;
        int agility;
        int lvl;
        int xp;
        std::string name;
        int def;
        int classID;
        float hitChance;

    public:
        player();
        player(std::string name, int startStr, int startAgi, int startInt);

        int heal();
        int gainXP();
        int getHP();
        std::string getName();
        int getInt();
        int getAgi();
        int getStr();
        int getLvl();
        int getXP();
        int getDef();

        // This need to be looked at carefully and questioned.

        inventory* playersInv;
        void createInv(itemTable* itemsTable, int invSize);
        int getInvSize();
        void setClass(int classChoice);
        void setDef(int classChoice);
        int getClassID();
        float getHit();
        void setHit(int classChoice);
};
