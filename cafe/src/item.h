#ifndef ITEM_H_
#define ITEM_H_

#include <utils.h>

#include <string>

enum ItemType{ COFFEE = 0, BAGEL = 1, CHIPS = 2, YOGURT = 3, JUICE = 4 };

class Item {
   public:
    ItemType type;
    float price;
    std::string description;

    Item(ItemType type, const float &price, const std::string &description) {
        this->price = price;
        this->description = Utils::to_lower(description);
    };
};

#endif  // ITEM_H_
