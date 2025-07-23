#include <iostream>;
#include <string>;
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
	};
}