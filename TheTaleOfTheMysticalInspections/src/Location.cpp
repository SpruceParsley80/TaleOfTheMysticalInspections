#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Challenge.h"
#include "Location.h"
#include "LearningOpportunity.h"
using namespace game;
            location::location() {
                this->name = "Place";
                this->challenges;
                this->learningOpportunities;
            }
            location::location(string name, vector<challenge> challenges, vector<learningOpportunity> learningOpportunities) {
                this->name = name;
                this->challenges = challenges;
                this->learningOpportunities = learningOpportunities;
            }