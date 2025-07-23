#include <iostream>;
#include <string>;
#include <vector>;
#include "Player.h";
using namespace std;
namespace game {
	class player : public entity {
	private:
		double strength;
		double charisma;
		double intelligence;
		double constitution;
		double wisdom;
		double dexterity;
        vector<double> allStats; //shall take 9 arguments, the first three being attack, health, and speed
        vector<double> setUpStats() {
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
		double getStrength() {
            return strength;
        }
		double getCharisma() {
            return charisma;
        }
		double getIntelligence() {
            return intelligence;
        }
		double getConstitution() {
            return constitution;
        }
		double getWisdom() {
            return wisdom;
        }
		double getDexterity() {
            return dexterity;
        }
        vector<double> getAllStats() {
            return allStats;
        }
		void setStrength(double strength) {
            this->strength = strength;
        }
		void setCharisma(double charisma) {
            this->charisma = charisma;
        }
		void setIntelligence(double intelligence) {
            this->intelligence = intelligence;
        }
		void setConstitution(double constitution) {
            this->constitution = constitution;
        }
		void setWisdom(double wisdom) {
            this->wisdom = wisdom;
        }
		void setDexterity(double dexterity) {
            this->dexterity = dexterity;
        }
        void setAllStats(vector<double> allStats) {
            setHealth(allStats[0]);
            setAttack(allStats[1]);
            setSpeed(allStats[2]);
            this->allStats = allStats;
        }
	};
}