#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "utility.h"
using namespace game;
bool utility::waitForEnter() {
    string waiter;
    getline(cin, waiter);
                    if (waiter == "") {
                        return true;
                    }
                }