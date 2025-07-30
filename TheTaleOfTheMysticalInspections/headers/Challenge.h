#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Player.h"
using namespace std;
namespace game {
    class challenge {
        private:
            string name;
            int winMargin;
            vector<double> statRequirements;
            vector<double> statRewards;
            double significance;
        public:
            string getName();
            challenge();
            challenge(string, int, const vector<double>&, const vector<double>&, double);
            bool runBasic(player);
    };
}