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
			string name;
	public:
		int getHealth();
		int getAttack();
		int getSpeed();
		string getName();
		void setHealth(int health);
		void setAttack(int attack);
		void setSpeed(int speed);
		void setName(string name);
	};
}
