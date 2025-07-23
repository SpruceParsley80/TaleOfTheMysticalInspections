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
            string type;
            vector<double> statBuffs;
            //health, attack, speed, strength, charisma, intelligence, constitution, wisdom, dexterity, 
            //in order, 9 total
    public:
            string getName();
            int getRarity();
            string getType();
            string getRarityAsString();
            vector<double> getStatBuffs();
            void setName(string);
            void setRarity(int);
            void setType(string);
            void setStatBuffs(vector<double>);
            item();
            item(string, int, vector<double>);
            string toString();
    };
}