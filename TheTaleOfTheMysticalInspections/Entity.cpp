#include <iostream>;
#include "Entity.h";
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
		int getHealth() {
			return this->health;
		}
		int getAttack() {
			return this->attack;
		}
		int getSpeed() {
			return this->speed;
		}
		string getName() {
			return this->name;
		}
		void setHealth(int health) {
			this->health = health;
		}
		void setAttack(int attack) {
			this->attack = attack;
		}
		void setSpeed(int speed) {
			this->speed = speed;
		}
		void setName(string name) {
			this->name = name;
		}
	};
}
