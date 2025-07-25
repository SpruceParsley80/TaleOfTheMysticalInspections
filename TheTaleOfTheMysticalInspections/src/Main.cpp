// TheTaleOfTheMysticalInspections.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <ctime>
#include "LearningOpportunity.h"
#include "Player.h"

using namespace game;

string waiter;
learningOpportunity questioon;
player me;
int main()
{
    // system("clear");
    // cout << "howdy ho neighrberino this program is coming soon djhfhfjdbxzjkBxhkxbvd";
    // for (int i = 0; i < 100; i++) {
    //     cout << endl;
    // }
    // cout << "hkiljfvkjdfngbjkdfbndfjbfkjbnf";
    system("clear");
    cout << "           The Tale of the Mystical Inspections" << endl << 
            "           &$_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-$&" << endl <<
            "             AˆCvAˆCvAˆCvAˆCvAˆCvAˆCvAˆCvAˆCv" << endl <<
            "                 vvuuvvuuvvuuvvuuvvuuvvuu" << endl;
    cout << "Press enter ";
    cin >> waiter;
    system("clear");
    questioon.runBasic("Why did the chicken cross the road?", "to get to the other side", me);

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
