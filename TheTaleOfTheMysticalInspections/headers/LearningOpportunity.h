#pragma once;
#include <iostream>;
#include <string>;
#include <vector>;
#include <ctime>;
#include <cstdlib>;
using namespace std;
using namespace game;
namespace game {
    class learningOpportunity {
        private:
            string name;
            vector<double> statRewards;
        public:
            string getName();
            vector<double> getStatRewards();
            bool runBasic(string, string, player);

    };
}