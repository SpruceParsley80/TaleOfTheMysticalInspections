#pragma once;
#include <iostream>;
#include <string>;
#include <ctime>;
#include <cstdlib>;
#include "LearningOpportunity.h";
using namespace std;
using namespace game;
namespace game {
    class learningOpportunity {
        private:
        string name;
        vector<double> statRewards;
    };
}