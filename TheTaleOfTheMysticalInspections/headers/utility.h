#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
namespace game {
    class utility{
        public:
        static bool waitForEnter();
        static void printAsciiArt(int);
    };
}