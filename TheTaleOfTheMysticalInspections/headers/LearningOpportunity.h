#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Player.h"
#include "utility.h"
using namespace std;
namespace game {
    class learningOpportunity {
        private:
            string name;
            vector<double> statRewards;
            public:
            string question;
            string correctAnswer;
            string getName();
            learningOpportunity();
            learningOpportunity(string, const vector<double>&);
            vector<double> getStatRewards();
            bool runBasic(string, string, player);

    };
}