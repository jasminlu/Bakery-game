#ifndef UT_LEVELS_H
#define UT_LEVELS_H

#include <iostream>
#include "Level.h"
using namespace std;

class UT_Levels {
    public: 
    void runTests() {
        levelTest();
    }
    private:
    void levelTest() {
        Level l1;
        if (l1.get_currentscore() != 0) {
            std::cout << "Test 1 failed" << std::endl;
        }
        l1.set_currentscore(10);
        
        if (l1.get_currentscore() != 10) {
            std::cout << "Test 2 failed" << std::endl; 
        }
    
    }

    


};
#endif