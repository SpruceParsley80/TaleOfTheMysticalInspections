#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Entity.h"
#include "Item.h"
#include "Challenge.h"
#include "Player.h"
#include "Location.h"
#include "LearningOpportunity.h"
using namespace std;
namespace game {
    //stat order:
    //health, attack, speed, strength, charisma, dexterity, intelligence, constitution, wisdom, reputation
    //challenges
    challenge makeDinner("Make Dinner", 3, {0, 0, 0, 0, 0.3, 1.5, 2, 1, 1.2, 0}, {0, 0, 0, 0.2, 0.1, 0.2, 0.1, 0.1, 1}, 0.2);
    challenge doTheDishes("Do the Dishes", 3, {0, 0, 0, 0, 0.4, 1.2, 0.6, 0.3, 0.2, 0}, {0, 0, 0, 0, 0.3, 1.3, 0.5, 0.4, 0.1, 0}, 0.3);


    //locations
    location home();
}