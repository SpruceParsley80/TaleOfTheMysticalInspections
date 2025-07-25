#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include "Player.h"
#include "LearningOpportunity.h"
using namespace game;
        string learningOpportunity::getName() {
            return name; 
        }
        vector<double> learningOpportunity::getStatRewards() {
            return statRewards;
        }
        bool learningOpportunity::runBasic(string question, string correctAnswer, player player) {
            string playerAnswer;
            // vector<double> stats = player.getAllStats();
            cout << question << " ";
            getline(cin, playerAnswer);
            bool win;
            std::transform(playerAnswer.begin(), playerAnswer.end(), playerAnswer.begin(), ::tolower);
            // cout << playerAnswer;
            if (playerAnswer == correctAnswer) {
                cout << "Passed";
                win = true;
                // for (int i = 0; i < stats.size(); i++) {
                //     stats[i] += this->statRewards[i];
                // }
                // player.setAllStats(stats);
                
            } else {
                cout << "Failed";
                win = false;
            }
            cout << endl;
            return win;
        }