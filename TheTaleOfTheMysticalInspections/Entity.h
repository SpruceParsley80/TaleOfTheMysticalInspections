#pragma once
#include <iostream>;
#include <string>;
using namespace std;
namespace game {
	class entity {
		private:
			double health;
			double attack;
			double speed;
			vector<double> allStats;
			string name;
	public:
		double getHealth();
		double getAttack();
		double getSpeed();
		string getName();
		vector<double> getAllStats();
		void setHealth(double health);
		void setAttack(double attack);
		void setSpeed(double speed);
		void setName(string name);
		void setAllStats(vector<double>);
	};
}
