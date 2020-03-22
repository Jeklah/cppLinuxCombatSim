#ifndef SHOP_H
#define SHOP_H
#include "item.h"
#include "inventory.h"

class shop {
    private:
        int shopGold;
        inventory bag;
    public:
        shop(int gold, inventory bag);
        int getShopGold();
        void fillBag();
        item sellItem();
        void buyItem();
};
#endif
