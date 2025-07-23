#pragma once
#include <iostream>;
#include <string>;
#include <vector>;
#include "Entity.h";
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
		vector<double> allStats;
		vector<double> setUpStats();
	public:
		double getStrength();
		double getCharisma();
		double getIntelligence();
		double getConstitution();
		double getWisdom();
		double getDexterity();
		vector<double> getAllStats();
		void setStrength(double);
		void setCharisma(double);
		void setIntelligence(double);
		void setConstitution(double);
		void setWisdom(double);
		void setDexterity(double);
		void setAllStats(vector<double>);
	};
}