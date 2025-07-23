#pragma once
#include <iostream>;
#include <string>;
#include <vector>;
#include "Entity.h";
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
		vector<int> allStats;
		vector<int> setUpStats();
	public:
		int getStrength();
		int getCharisma();
		int getIntelligence();
		int getConstitution();
		int getWisdom();
		int getDexterity();
		vector<int> getAllStats();
		void setStrength(int);
		void setCharisma(int);
		void setIntelligence(int);
		void setConstitution(int);
		void setWisdom(int);
		void setDexterity(int);
		void setAllStats(vector<int>);
	};
}