#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <variant>
#include "Challenge.h"
#include "LearningOpportunity.h"
#include <ctime>
#include <cstdlib>
using namespace std;
namespace game {
    class location {
        private:
        string name;
        vector<variant<learningOpportunity, challenge>> events;
        public:
        location();
        location(string, vector<variant<learningOpportunity, challenge>>);
        void playThroughBasic(player player);
    };
}