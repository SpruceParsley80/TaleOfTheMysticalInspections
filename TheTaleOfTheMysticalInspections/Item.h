#pragma once

#include <iostream>;
#include <string>;
#include <vector>;
using namespace std;
namespace game {
    class item {
    private:
            string name;
            int rarity;
            vector<int> statBuffs;
            //health, attack, speed, strength, charisma, intelligence, constitution, wisdom, dexterity, 
            //in order, 9 total
    public:
            string getName();
            int getRarity();
            string getRarityAsString();
            vector<int> getStatBuffs();
            void setName(string);
            void setRarity(int);
            void setStatBuffs(vector<int>);
            item();
            item(string, int, vector<int>);
    };
}