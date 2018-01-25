#pragma once

#include <vector>
#include <string>
#include "item.h"

class itemTable{
    public:
        itemTable();
        ~itemTable();

        int getWeight(int itemID);
        item* getItem(int id);

        void addItem(item* item);

    private:
        std::vector<item*> items;
};
