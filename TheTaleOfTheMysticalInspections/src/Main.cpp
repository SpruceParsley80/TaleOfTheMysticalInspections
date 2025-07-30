// TheTaleOfTheMysticalInspections.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <ctime>
#include "LearningOpportunity.h"
#include "Challenge.h"
#include "Player.h"
#include "utility.h"

using namespace game;

vector<double> statBase = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
learningOpportunity questioon("hello", {1.1, 1.1, 2.1, 1.3, 2.456252, 5.2, 3.14159, 132144.0, 3.0, 3.0});
challenge hello("Hello", 3, {1.0, 1.0, 2.0, 1.0, 2.0, 5.0, 2.0, 1.0, 1.0, 1.0}, {1.0, 1.0, 2.0, 1.0, 2.0, 5.0, 2.0, 1.0, 1.0, 1.0}, 0.2);
player me;
int main()
{
    me.setAllStats(statBase);
    // system("clear");
    // cout << "howdy ho neighrberino this program is coming soon djhfhfjdbxzjkBxhkxbvd";
    // for (int i = 0; i < 100; i++) {
    //     cout << endl;
    // }
    // cout << "hkiljfvkjdfngbjkdfbndfjbfkjbnf";
    system("clear");
    questioon.runBasic("Why did the chicken cross the road?", "to get to the other side", me);
    hello.runBasic(me);
    cout << "Press enter ";
    if (utility::waitForEnter()) {
        cout << "enter pressed :)" << endl;
        system("clear");
        cout << "           The Tale of the Mystical Inspections" << endl << 
                "           &$_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-$&" << endl <<
                "             AˆCvAˆCvAˆCvAˆCvAˆCvAˆCvAˆCvAˆCv" << endl <<
                "                 vvuuvvuuvvuuvvuuvvuuvvuu" << endl;
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
