#pragma once

#include <iostream>;
#include <string>;
using namespace std;
namespace game {
	//hello how are you doing
	class entity {
		private:
			int health;
			int attack;
			int speed;
			vector<int> allStats;
			string name;
	public:
		int getHealth();
		int getAttack();
		int getSpeed();
		string getName();
		vector<int> getAllStats();
		void setHealth(int health);
		void setAttack(int attack);
		void setSpeed(int speed);
		void setName(string name);
		void setAllStats(vector<int>);
	};
}
