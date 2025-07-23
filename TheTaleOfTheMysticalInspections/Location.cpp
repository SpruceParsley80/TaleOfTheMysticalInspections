#include <iostream>;
#include <string>;
#include "Challenge.h";
#include "Location.h";
#include "LearningOpportunity.h";
using namespace std;
using namespace game;
namespace game {
    class location {
        string name;
        vector<challenge> challenges;
        vector<learningOpportunity> learningOpportunities; 
    };
}