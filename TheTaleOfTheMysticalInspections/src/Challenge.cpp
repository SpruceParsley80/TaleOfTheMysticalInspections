#include <iostream>
#include <string>
#include "Player.h"
#include "Challenge.h"
#include <ctime>
#include <cstdlib>
using namespace game;
            challenge::challenge() {
                this->name = "Challenge";
                this->winMargin = 0;
                this->statRequirements = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                this->statRewards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                this->significance = 0;
            }
            challenge::challenge(string name, int winMargin, vector<double> statRequirements, vector<double> statRewards, double significance) {
                this->name = name;
                this->winMargin = winMargin;
                this->statRequirements = statRequirements;
                this->statRewards = statRewards;
                this->significance = significance;
            }
            bool challenge::runBasic(player player) {
                int winPoints = 0;
                bool win;
                vector<double> playerStatsTemp = player.getAllStats();
                for (int i = 0; i < statRequirements.size(); i++) {
                    if (statRequirements[i] >= playerStatsTemp[i]) {
                        winPoints++;
                    }
                }
                if (winPoints >= winMargin) {
                    for (int i = 0; i < statRequirements.size(); i++) {
                        playerStatsTemp[i] += (statRewards[i] * (significance / 2));
                        cout << "You win";     
                        win = true;                   
                    }
                    
                } else {
                    for (int i = 0; i < statRequirements.size(); i++) {
                        playerStatsTemp[i] -= (playerStatsTemp[i] * significance);    
                        win = false;
                        cout << "You lose";                  
                    }
                }
                player.setAllStats(playerStatsTemp);
                return win;
            } 