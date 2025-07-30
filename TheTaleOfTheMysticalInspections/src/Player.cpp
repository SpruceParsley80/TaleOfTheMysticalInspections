#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include <ctime>
#include <cstdlib>
#include "utility.h"
using namespace game;

		double player::getStrength() {
            return strength;
        }
		double player::getCharisma() {
            return charisma;
        }
		double player::getIntelligence() {
            return intelligence;
        }
		double player::getConstitution() {
            return constitution;
        }
		double player::getWisdom() {
            return wisdom;
        }
		double player::getDexterity() {
            return dexterity;
        }
        double player::getReputation() {
            return dexterity;
        }
        item player::getWeapon() {
            return weapon;
        }
		item player::getArmor() {
            return armor;
        }
		item player::getTrinket() {
            return trinket;
        }
        vector<double> player::getAllStats() {
            return allStats;
        }
		void player::setStrength(double strength) {
            this->strength = strength;
        }
		void player::setCharisma(double charisma) {
            this->charisma = charisma;
        }
		void player::setIntelligence(double intelligence) {
            this->intelligence = intelligence;
        }
		void player::setConstitution(double constitution) {
            this->constitution = constitution;
        }
		void player::setWisdom(double wisdom) {
            this->wisdom = wisdom;
        }
		void player::setDexterity(double dexterity) {
            this->dexterity = dexterity;
        }
        void player::setAllStats(vector<double> allStats) {
            setHealth(allStats[0]);
            setAttack(allStats[1]);
            setSpeed(allStats[2]);
            this->allStats = allStats;
        }