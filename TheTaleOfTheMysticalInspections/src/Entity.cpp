#include <iostream>
#include "Entity.h"
#include <string>
#include <ctime>
#include <cstdlib>`
using namespace std;
namespace game {
	//hello how are you doing
	class entity {
	private:
		double health;
		double attack;
		double speed;
		string name;
		vector<double> allStats;
	public:
		double getHealth() {
			return this->health;
		}
		double getAttack() {
			return this->attack;
		}
		double getSpeed() {
			return this->speed;
		}
		string getName() {
			return this->name;
		}
		vector<double> getAllStats() {
			return allStats;
		}
		void setHealth(double health) {
			this->health = health;
		}
		void setAttack(double attack) {
			this->attack = attack;
		}
		void setSpeed(double speed) {
			this->speed = speed;
		}
		void setName(string name) {
			this->name = name;
		}
		void setAllStats(vector<double> allStats) {
			this->allStats = allStats;
		}
	};
}
