#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include "utility.h"
using namespace game;
bool utility::waitForEnter() {
    string waiter;
    getline(cin, waiter);
                    if (waiter == "") {
                        return true;
                    }
                }
void utility::printAsciiArt(int choice) {
    string output = "DEFAULT VALUE IF YOU SEE THIS SOMETHING IS WRONG";
    ifstream inputFile("/Users/masonsacksteder/TheTaleOfTheMysticalInspections-main/TheTaleOfTheMysticalInspections/ascii-art.txt");
    // inputFile.open("/Users/masonsacksteder/TheTaleOfTheMysticalInspections-main/TheTaleOfTheMysticalInspections/ascii-art.txt");
    cout << "if statement reacxhed";
    if (inputFile.is_open()) {
        cout << "for loop reached";
        // while (getline(inputFile, output)) {
        //     cout << output;
        // }
        for (int i = 0; i < choice * 22; i++) {
            getline(inputFile, output);
        }
            for (int i = 0; i < 22; i++) {
                getline(inputFile, output);
                // cout << "Line " << i << " Printed" << endl;
                cout << output << endl;
            }
            inputFile.close();
        }

}