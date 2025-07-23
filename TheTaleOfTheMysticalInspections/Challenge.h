#pragma once;
#include <iostream>;
#include <string>;
#include <ctime>;
#include <cstdlib>;
using namespace std;
using namespace game;
namespace game {
    class challenge {
        private:
            string name;
            vector<double> statRequirements;
            vector<double> statRewards;
            double significance;
    };
}