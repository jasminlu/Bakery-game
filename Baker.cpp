#include "Baker.h"
#include <string>
#include <iostream>
using namespace std; 

Baker::Baker(std::string name1) { //constructor for baker sets name using user input and highscore to 0
    name = name1;
    highscore = 0;
}

std::string Baker::get_name() { //returns name of baker
    return name;
}

void Baker::set_name(std::string name1) { //sets name of baker
    name = name1;
}

int Baker::get_highscore() {  //returns highscore
    return highscore;
}

void Baker::set_highscore(int highscore1) { //sets highscore
    highscore = highscore1;
}