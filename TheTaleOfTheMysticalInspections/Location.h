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
        string name;
        vector<challenge> challenges;
        vector<learningOpportunity> learningOpportunities; 
    };
}