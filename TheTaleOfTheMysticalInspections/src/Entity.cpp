#include <iostream>
#include "Entity.h"
#include <string>
#include <ctime>
#include <cstdlib>
using namespace game;
	//hello how are you doing
		double entity::getHealth() {
			return this->health;
		}
		double entity::getAttack() {
			return this->attack;
		}
		double entity::getSpeed() {
			return this->speed;
		}
		string entity::getName() {
			return this->name;
		}
		vector<double> entity::getAllStats() {
			return allStats;
		}
		void entity::setHealth(double health) {
			this->health = health;
		}
		void entity::setAttack(double attack) {
			this->attack = attack;
		}
		void entity::setSpeed(double speed) {
			this->speed = speed;
		}
		void entity::setName(string name) {
			this->name = name;
		}
		void entity::setAllStats(vector<double> allStats) {
			this->allStats = allStats;
		}
