#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Player.h"
using namespace std;
namespace game {
    class learningOpportunity {
        private:
            string name;
            vector<double> statRewards;
        public:
            string getName();
            vector<double> getStatRewards();
            bool runBasic(string, string, player);

    };
}