#pragma once;
#include <iostream>;
#include <string>;
#include <vector>;
#include "Challenge.h";
#include "LearningOpportunity.h";
#include <ctime>;
#include <cstdlib>;
using namespace std;
using namespace game;
namespace game {
    class location {
        private:
        string name;
        vector<challenge> challenges;
        vector<learningOpportunity> learningOpportunities; 
        public:
        location();
        location(string, vector<challenge>, vector<learningOpportunity>);
    };
}