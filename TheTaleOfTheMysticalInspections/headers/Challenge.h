#pragma once;
#include <iostream>;
#include <string>;
#include <ctime>;
#include <cstdlib>;
#include "Player.h";
using namespace std;
using namespace game;
namespace game {
    class challenge {
        private:
            string name;
            int winMargin;
            vector<double> statRequirements;
            vector<double> statRewards;
            double significance;
        public:
            challenge();
            challenge(string, int, vector<double>, vector<double>, double);
            bool runBasic(player);
    };
}