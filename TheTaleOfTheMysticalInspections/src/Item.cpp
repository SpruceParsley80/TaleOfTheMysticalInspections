#include <iostream>
#include <string>
#include <vector>
#include "Item.h"
#include <ctime>
#include <cstdlib>
using namespace game;

item::item(string name, int rarity, vector<double> statBuffs) {
    this->name = name;
    this->rarity = rarity;
    this->statBuffs = statBuffs;
}
item::item() {
    this->name = "New Item";
    this->rarity = 0;
    this->statBuffs = {0, 0, 0, 0, 0, 0, 0, 0, 0};
}
            string item::getName() {
                return name;
            }
            int item::getRarity() {
                return rarity;
            }
            string item::getRarityAsString() {
                switch (rarity) {
                    case 0:
                        return "Common";
                        break;
                    case 1:
                        return "Uncommon";
                        break;
                    case 2:
                        return "Rare";
                        break;
                    case 3:
                        return "Epic";
                        break;
                    case 4:
                        return "Legendary";
                        break;
                    case 5:
                        return "Mythic";
                        break;
                    case 6:
                        return "Special";
                        break;
                    default:
                        return "Unknown";
                        break;
                }

            }
            string item::getType() {
                return type;
            }
            vector<double> item::getStatBuffs() {
                return statBuffs;
            }
            void item::setName(string name) {
                this->name = name;
            }
            void item::setRarity(int rarity) {
                this->rarity = rarity;
            }
            void item::setType(string type) {
                this->type = type;
            }
            void item::setStatBuffs(vector<double> statBuffs) {
                    this->statBuffs = statBuffs;
            }
            string item::toString(){
            return name + "\n" + getRarityAsString() + " " + type;
        }
