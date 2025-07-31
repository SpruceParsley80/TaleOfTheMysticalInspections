#include <iostream>
#include <fstream>
#include <string>
#include "Player.h"
#include "Challenge.h"
#include <ctime>
#include <cstdlib>
#include "utility.h"
using namespace game;

            challenge::challenge() {
                this->name = "Challenge";
                this->winMargin = 0;
                // this->statRequirements = vector<double>(10, 0.0);
                for (int i = 0; i < 10; i++) {
                    statRequirements.push_back(0);
                }
                // this->statRewards = vector<double>(10, 0.0);
                for (int i = 0; i < 10; i++) {
                    statRewards.push_back(0);
                }
                this->significance = 0;
            }
            challenge::challenge(string name, int winMargin, const vector<double> &statRequirements, const vector<double> &statRewards, double significance) {
                this->name = name;
                this->winMargin = winMargin;
                // this->statRequirements = statRequirements;
                for (int i = 0; i < statRewards.size(); i++) {
                this->statRewards.push_back(statRewards[i]);
            }
                // this->statRewards = statRewards;
                for (int i = 0; i < statRequirements.size(); i++) {
                this->statRewards.push_back(statRequirements[i]);
            }
                this->significance = significance;
            }
            bool challenge::runBasic(player player) {
                cout << endl << "Challenge: \033[3m" << name << "\033[0m" << endl;
                int winPoints = 0;
                bool win;
                vector<double> stats = player.getAllStats();
                cout << "Your Current Stats: " << endl << endl;
                    for (int i = 0; i < stats.size(); i++) {
                        cout << player.getAllStats()[i] << endl;
                    }
                for (int i = 0; i < statRequirements.size(); i++) {
                    if (statRequirements[i] >= stats[i]) {
                        winPoints++;
                    }
                }
                if (winPoints >= winMargin) {
                    for (int i = 0; i < statRequirements.size(); i++) {
                        stats[i] += (statRewards[i] * (significance / 2));
                    }
                    win = true;                   
                    cout << "You Win" << endl << endl;
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
                    for (int i = 0; i < statRequirements.size(); i++) {
                        stats[i] -= (stats[i] * significance);    
                    }
                    win = false;
                    cout << "You lose";      
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
                }
                cout << "Press Enter to Continue";
                        if (utility::waitForEnter()) {
                            player.setAllStats(stats);
                            return win;
                        }
            } 
            string challenge::getName() {
                return name;
            }