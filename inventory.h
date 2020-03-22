#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "itemTable.h"
#include "item.h"

class inventory {
    private:
        int gold;
        int size;
        int usedSize;
        int freeSize;
        vector<int> invIndex;
        itemTable* theItemTable;i

    public:
        inventory(itemTable* _itemTable, int _startingSize);

        int getGold();
        int getSize();
        int getUsedSize();
        int getFreeSize();
        void printItem(std::ostream& _stream, int _id);
        void addItem(int itemID);
        void removeItem(int itemID);
};
