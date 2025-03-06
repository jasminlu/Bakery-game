#ifndef BAKERY_H
#define BAKERY_H

#include "Baker.h"
#include "Level.h"
#include <string.h>
#include <iostream>
#include <fstream>
using namespace std;

class Bakery {
    private:
        std::string name;
        Baker* baker; // A Baker pointer to baker
        Level** levels; //A Level pointer which points to a array of pointers levels
        fstream file; //for input and output with external files 
    public:
        Bakery(std::string name1, Baker* baker1, Level** levels1); //the Bakery constructor
        std::string get_name();
        void set_name(std::string name1);
        Baker* get_baker();
        Level** get_levels();

        ~Bakery();
};

#endif 

