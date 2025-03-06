#ifndef UTBAKER_H
#define UTBAKER_H
#include <iostream>
#include "Baker.h"
#include <string>

using namespace std;

class UTBaker {
    public:
    void runTests() {
        testName();
        testHighScore();
    }
    private:
    void testName() {
        Baker B1("baker1");
        if (B1.get_name() != "baker1") {
            std::cout << "Test 1 failed" << std::endl;
        }
        B1.set_name("b1");
        if(B1.get_name() != "b1") {
            std::cout << "Test 2 failed" << std::endl;
        }
    }
    void testHighScore() {
        Baker B2("baker2");
        if (B2.get_highscore() != 0) {
            std::cout << "Test 3 failed" <<std::endl;
        }

        B2.set_highscore(111);
        if (B2.get_highscore() != 111) {
            std::cout << "Test 3 failed" << std::endl; 
        }
        
    }
};

#endif