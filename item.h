#pragma once

#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

class item {
    private:
        std::string name;
        int weight;
        int mainStat;
        int offStat;
        int minorStat;
        int id;

    public:
        item(std::string name, int id, int weight, int mainS, int offS, int minS);
        std::string getName();
        int getWeight();
        int getMainStat();
        int getOffStat();
        int getMinorStat();
        int getID();
};

#endif
