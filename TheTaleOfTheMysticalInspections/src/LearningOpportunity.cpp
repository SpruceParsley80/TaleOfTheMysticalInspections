#include <iostream>
#include <fstream>
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
            srand(time(nullptr));
            string playerAnswer;
            string funnyResponse;
            ifstream inputFile("/Users/masonsacksteder/TheTaleOfTheMysticalInspections-main/TheTaleOfTheMysticalInspections/sentences.txt");
            string test;
            int lineCounter;
            // if (inputFile.is_open()) {
            //     while (getline(inputFile, test)) {
            //         lineCounter++;
            //     }
            // }
            int funny = rand() % 135;
            // cout << funny;
            if (inputFile.is_open()) {
            for (int i = 0; i < funny; i++) {
                getline(inputFile, funnyResponse);
            }
        }
            inputFile.close();
            // vector<double> stats = player.getAllStats();
            cout << question << " ";
            getline(cin, playerAnswer);
            bool win;
            std::transform(playerAnswer.begin(), playerAnswer.end(), playerAnswer.begin(), ::tolower);
            // cout << playerAnswer;
            if (playerAnswer == correctAnswer) {
                cout << "Passed" << endl;
                cout << "\033[3m" << funnyResponse << "\033[0m";
                win = true;
                // for (int i = 0; i < stats.size(); i++) {
                //     stats[i] += this->statRewards[i];
                // }
                // player.setAllStats(stats);
                
            } else {
                cout << "Failed" << endl;
                cout << "\033[3m" << funnyResponse << "\033[0m";
                win = false;
            }
            cout << endl;
            return win;
        }