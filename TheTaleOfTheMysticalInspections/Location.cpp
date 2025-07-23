#include <iostream>;
#include <string>;
#include <ctime>;
#include <cstdlib>;
#include "Challenge.h";
#include "Location.h";
#include "LearningOpportunity.h";
using namespace std;
using namespace game;
namespace game {
    class location {
        private:
            string name;
            vector<challenge> challenges;
            vector<learningOpportunity> learningOpportunities; 
        public:
            location() {
                this->name = "Place";
                this->challenges;
                this->learningOpportunities;
            }
            location(string name, vector<challenge> challenges, vector<learningOpportunity> learningOpportunities) {
                this->name = name;
                this->challenges = challenges;
                this->learningOpportunities = learningOpportunities;
            }
    };
}