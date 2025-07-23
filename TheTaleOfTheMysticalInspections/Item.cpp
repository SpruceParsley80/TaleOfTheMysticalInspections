#pragma once

#include <iostream>;
#include <string>;
#include <vector>;
#include "Item.h";
using namespace std;
namespace game {
    class item {
    private:
            string name;
            int rarity;
            vector<double> statBuffs;
            string type;
            //health, attack, speed, strength, charisma, intelligence, constitution, wisdom, dexterity, 
            //in that order, vector length 9
    public:
            string getName() {
                return name;
            }
            int getRarity() {
                return rarity;
            }
            string getRarityAsString() {
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
            string getType() {
                return type;
            }
            vector<double> getStatBuffs() {
                return statBuffs;
            }
            void setName(string name) {
                this->name = name;
            }
            void setRarity(int rarity) {
                this->rarity = rarity;
            }
            void setType(string type) {
                this->type = type;
            }
            void setStatBuffs(vector<double> statBuffs) {
                    this->statBuffs = statBuffs;
            }
            item() {
                this->name = "New Item";
                this->rarity = 0;
                this->statBuffs = {0, 0, 0, 0, 0, 0, 0, 0, 0};
            }
            item(string name, int rarity, vector<double> statBuffs) {
                this->name = name;
                this->rarity = rarity;
                this->statBuffs = statBuffs;
            }
            string toString(){
            return name + "\n" + getRarityAsString() + " " + type;
        }
    };
}