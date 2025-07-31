#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include "Player.h"
#include "LearningOpportunity.h"
#include "utility.h"
using namespace game;

        string learningOpportunity::getName() {
            return name; 
        }
        learningOpportunity::learningOpportunity(string name, string question, string answer, const vector<double> &statRewards) {
            this->name = name;
            this->correctAnswer = answer;
            this->question = question;
            for (int i = 0; i < statRewards.size(); i++) {
                this->statRewards.push_back(statRewards[i]);
            }
            // this->statRewards = statRewards;
        }
        learningOpportunity::learningOpportunity() {
            this->name = "Learning Opportunity";
            this->statRewards = vector<double>(10, 0.0);
        }
        vector<double> learningOpportunity::getStatRewards() {
            return statRewards;
        }
        bool learningOpportunity::runBasic(string question, string correctAnswer, player player) {
            srand(time(nullptr));
            string waiter;
            string playerAnswer;
            vector<double> stats;
            // for (int i = 0; i < player.getAllStats().size(); i++) {
            //     stats[i] = player.getAllStats()[i];
            // }
            string funnyResponse;
            ifstream inputFile("/Users/masonsacksteder/TheTaleOfTheMysticalInspections-main/TheTaleOfTheMysticalInspections/sentences.txt");
            string test;
            int lineCounter;
            // if (inputFile.is_open()) {
            //     while (getline(inputFile, test)) {
            //         lineCounter++;
            //     }
            // }
            cout << "Your Current Stats: " << endl << endl;
                    for (int i = 0; i < player.getAllStats().size(); i++) {
                        cout << player.getAllStats()[i] << endl;
                    }
            int funny = rand() % 135;
            // cout << funny;
            if (inputFile.is_open()) {
            for (int i = 0; i < funny; i++) {
                getline(inputFile, funnyResponse);
            }
        }
            inputFile.close();
            stats = player.getAllStats();
            cout << question << " ";
            getline(cin, playerAnswer);
            bool win;
            std::transform(playerAnswer.begin(), playerAnswer.end(), playerAnswer.begin(), ::tolower);
            // cout << playerAnswer;
            //make the printing a utility function ?
            if (playerAnswer == correctAnswer && playerAnswer != "skip") {
                cout << "Passed" << endl;
                cout << "\033[3m" << funnyResponse << "\033[0m";
                win = true;
                for (int i = 0; i < stats.size(); i++) {
                    stats[i] += this->statRewards[i];
                }
                cout << "Your Current Stats: " << endl << endl;
                for (int i = 0; i < stats.size(); i++) {
                    cout << stats[i];
                    if (stats[i] - player.getAllStats()[i] > 0) {
                        cout << " (+" << stats[i] - player.getAllStats()[i] << ")" << endl;
                    } else if (stats[i] - player.getAllStats()[i] < 0) {
                        cout << " (" << stats[i] - player.getAllStats()[i] << ")" << endl;
                    } else {
                        cout << endl;
                    }
                }
                player.setAllStats(stats);
                
            } else if (playerAnswer != "skip") {
                cout << "Failed" << endl;
                cout << "\033[3m" << funnyResponse << "\033[0m";
                win = false;
                cout << "Your Current Stats: " << endl << endl;
                    for (int i = 0; i < stats.size(); i++) {
                        cout << stats[i];
                        if (stats[i] - player.getAllStats()[i] > 0) {
                        cout << " (+" << stats[i] - player.getAllStats()[i] << ")" << endl;
                    } else if (stats[i] - player.getAllStats()[i] < 0) {
                        cout << " (" << stats[i] - player.getAllStats()[i] << ")" << endl;
                    } else {
                        cout << endl;
                    }
                    }
            } else {
                cout << "Skipped" << endl;
                return false;
            }
            cout << "Press Enter to Continue ";
            
                        if (utility::waitForEnter()) {
                            cout << endl;
                            return win;
                        }
        }