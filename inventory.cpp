#include <iostream>
#include <string>
#include "inventory.h"
#include "item.h"
#include "itemTable.h"

// not using std namespace...bad practice!

inventory::inventory(itemTable* _itemTable, int _startingSize) :
    size(_startingSize),
    gold(0),
    usedSize(0),
    freeSize(0) {                    // what's goin on here?
        invIndex.reserve(size);
        theItemTable = _itemTable;
    }

int inventory::getGold() {
    return gold;
}

int inventory::getSize() {
    return size;
}

int inventory::getUsedSize() {
    return usedSize;
}

// questionable changing value of usedSize note in vs version

int inventory::getFreeSize() {
    return freeSize;
}

void inventory::printItem(std::ostream& _ostream, int _id) {
    int id = _id;
    int mainStat = theItemTable->getItem(id)->getMainStat();
    int offStat = theItemTable->getItem(id)->getOffStat();
    int minorStat = theItemTable->getItem(id)->getMinorStat();
    std::string itemName = theItemTable->getItem(id)->getName();

    // move formatting to a seperate file once it is all
    // converted
    std::string vertSpcPadding = "               ";

    _ostream << "Name     :" << itemName << "\n";
    _ostream << vertSpcPadding << "ID        : " << id << "\n";
    _ostream << vertSpcPadding << "Main Stat : " << mainStat << "\n";
    _ostream << vertSpcPadding << "Off Stat  : " << offStat << "\n";
    _ostream << std::endl;
}

void inventory::addItem(int itemID) {
    int weight = theItemTable->getWeight(itemID);
    if ((usedSize + weight) <= size) {
        invIndex.push_back(itemID);
        usedSize++;
        freeSize--;
    }
}
