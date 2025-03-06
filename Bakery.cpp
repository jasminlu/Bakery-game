#include "Bakery.h"

Bakery::Bakery(std::string name1, Baker* baker1, Level** levels1) { //constructor for bakery
    name = name1; 
    baker = baker1; 
    levels = levels1;
    fstream file;  //file for user highscore
    file.open("ButtercupBakeryScores.txt");
    file.open("ButtercupBakeryScores.txt", fstream::out | fstream::trunc);
    file << "0";
    file.close();
}

std::string Bakery::get_name() {  //getter function for name of bakery
    return name;
}

void Bakery::set_name(std::string name1) {  //setter function for name of bakery
    name = name1;
}

Baker* Bakery::get_baker() { //getter function for baker class
    return baker;
}

Level** Bakery::get_levels() {  //getter function for array of levels
    return levels;
}

Bakery::~Bakery() {  //deconstructor for bakery class
    delete [] baker; //delete baker
    delete [] levels; //delete levels array
}
