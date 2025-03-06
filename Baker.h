//defines class header file for Baker
#ifndef BAKER_H
#define BAKER_H

#include <string>
using namespace std; 

#include <iostream> //includes library

class Baker { //initialises class Baker
    private:
        std::string name; //defines string variable called name
        int highscore; //defines integer variable called highscore
    public:
        Baker(std::string name1); //
        std::string get_name();
        void set_name(std::string name1);
        int get_highscore();
        void set_highscore(int highscore1);
};

#endif
