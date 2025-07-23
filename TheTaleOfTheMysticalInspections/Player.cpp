#include <iostream>;
#include <string>;
#include <vector>;
#include "Player.h";
using namespace std;
namespace game {
	class player : public entity {
	private:
		int strength;
		int charisma;
		int intelligence;
		int constitution;
		int wisdom;
		int dexterity;
        vector<int> allStats; //shall take 9 arguments, the first three being attack, health, and speed
        vector<int> setUpStats() {
            allStats.push_back(getAttack());
            allStats.push_back(getHealth());
            allStats.push_back(getSpeed());
            allStats.push_back(strength);
            allStats.push_back(charisma);
            allStats.push_back(intelligence);
            allStats.push_back(constitution);
            allStats.push_back(wisdom);
            allStats.push_back(dexterity);
        }
	public:
		int getStrength() {
            return strength;
        }
		int getCharisma() {
            return charisma;
        }
		int getIntelligence() {
            return intelligence;
        }
		int getConstitution() {
            return constitution;
        }
		int getWisdom() {
            return wisdom;
        }
		int getDexterity() {
            return dexterity;
        }
        vector<int> getAllStats() {
            return allStats;
        }
		void setStrength(int strength) {
            this->strength = strength;
        }
		void setCharisma(int charisma) {
            this->charisma = charisma;
        }
		void setIntelligence(int intelligence) {
            this->intelligence = intelligence;
        }
		void setConstitution(int constitution) {
            this->constitution = constitution;
        }
		void setWisdom(int wisdom) {
            this->wisdom = wisdom;
        }
		void setDexterity(int dexterity) {
            this->dexterity = dexterity;
        }
        void setAllStats(vector<int> allStats) {
            this->allStats = allStats;
        }
	};
}