#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include "Player.h"
#include "LearningOpportunity.h"
using namespace std;
namespace game {
    class learningOpportunity {
        private:
        string name;
        vector<double> statRewards;
        public:
        string getName() {
            return name; 
        }
        vector<double> getStatRewards() {
            return statRewards;
        }
        bool runBasic(string question, string correctAnswer, player player) {
            string playerAnswer;
            vector<double> stats = player.getAllStats();
            cout << question << " ";
            cin >> playerAnswer;
            bool win;
            std::transform(playerAnswer.begin(), playerAnswer.end(), playerAnswer.begin(), ::tolower);

            if (playerAnswer == correctAnswer) {
                cout << "Passed";
                win = true;
                for (int i = 0; i < stats.size(); i++) {
                    stats[i] += statRewards[i];
                }
                player.setAllStats(stats);
                
            } else {
                cout << "Failed";
                win = false;
            }
            cout << endl;
            return win;
        }
    };
}