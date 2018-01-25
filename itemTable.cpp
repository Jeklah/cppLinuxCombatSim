#include "itemTable.h"
#include "item.h"

itemTable::itemTable() {}

// New'd elsewhere but needs deleting. use smart pointer here.

itemTable::~itemTable() {}

int itemTable::getWeight(int itemID) {
    return items[itemID]->getWeight();
}

void itemTable::addItem(item* item) {
    items.push_back(item);
}

item* itemTable::getItem(int id) {
    item* giveItem = items[id];
    return giveItem;
}
