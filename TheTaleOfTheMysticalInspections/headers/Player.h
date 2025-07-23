#pragma once
#include <iostream>;
#include <string>;
#include <vector>;
#include "Entity.h";
#include "Item.h";
#include <ctime>;
#include <cstdlib>;
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
		double reputation;
		item weapon;
		item armor;
		item trinket;
		vector<double> allStats;
		vector<double> setUpStats();
		public:
		vector<item> inventory;
		double getStrength();
		double getCharisma();
		double getIntelligence();
		double getConstitution();
		double getWisdom();
		double getDexterity();
		double getReputation();
		vector<double> getAllStats();
		item getWeapon();
		item getArmor();
		item getTrinket();
		void setStrength(double);
		void setCharisma(double);
		void setIntelligence(double);
		void setConstitution(double);
		void setWisdom(double);
		void setDexterity(double);
		void setReputation(double);
		void setAllStats(vector<double>);
		void setArmor(item);
		void setWeapon(item);
		void setTrinket(item);
	};
}