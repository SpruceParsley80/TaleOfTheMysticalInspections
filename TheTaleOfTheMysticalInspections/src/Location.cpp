#include <iostream>
#include <string>
#include <ctime>
#include <variant>
#include <cstdlib>
#include "Challenge.h"
#include "Location.h"
#include "LearningOpportunity.h"
#include "utility.h"
using namespace game;

            location::location() {
                this->name = "Place";
                this->events;
            }
            location::location(string name, vector<variant<learningOpportunity, challenge>> events) {
                this->name = name;
                this->events = events;
            }
            void location::playThroughBasic(player player) {
                for (int i = 0; i < events.size(); i++) {
                    variant<learningOpportunity, challenge> temp = events.at(i);
                    if (holds_alternative<learningOpportunity>(temp)) {
                        learningOpportunity tempLE = get<learningOpportunity>(events.at(i));
                        cout << endl << endl << endl << endl << "Press enter: ";
                        if (utility::waitForEnter()) {
                            tempLE.runBasic(tempLE.question, tempLE.correctAnswer, player);
                        }

                    } else {
                        challenge tempCH = get<challenge>(events.at(i));
                        cout << endl << endl << endl << endl << "Press enter: ";
                        if (utility::waitForEnter()) {
                        tempCH.runBasic(player);
                        }
                    }
                }
            }
