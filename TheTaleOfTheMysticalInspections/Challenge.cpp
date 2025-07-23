#include <iostream>;
#include <string>;
#include "Player.h";
#include "Challenge.h";
#include <ctime>;
#include <cstdlib>;
using namespace std;
using namespace game;
namespace game {
    class challenge {
        private:
            string name;
            int winMargin;
            vector<double> statRequirements;
            vector<double> statRewards;
            double significance;
        public:
            bool runBasic(player player) {
                int winPoints = 0;
                vector<double> playerStatsTemp = player.getAllStats();
                for (int i = 0; i < statRequirements.size(); i++) {
                    if (statRequirements[i] >= playerStatsTemp[i]) {
                        winPoints++;
                    }
                }
                if (winPoints >= winMargin) {
                    for (int i = 0; i < statRequirements.size(); i++) {
                                                
                    }
                }
            } 
    };
}