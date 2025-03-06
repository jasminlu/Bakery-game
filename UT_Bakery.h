#ifndef UTBAKERY_H
#define UTBAKERY_H
#include "Bakery.h"
#include "Level.h"
#include <iostream>
#include <string>
using namespace std; 

class UT_Bakery {
    public:
    void runTests() {
        testBaker();
        testLevels();
    }
    private:
    void testBaker() {
        Baker *b1 = new Baker("baker1");
        Level **levels = new Level*[5];
        for (int i = 0; i<5; i++) {
            levels[i] = new Level[1];
        }
        Bakery bakery1("bakeryOne", b1, levels);
        
        if (bakery1.get_baker() != b1){
            std::cout << "Test 1 failed" << std::endl; 
        }
        for (int i=0; i<5; i++) {
            delete [] levels[i];
        }
        delete [] levels;
    }
    void testLevels() {
        Baker b2("baker2");
        Level** levels1 = new Level*[5];
        for (int i = 0; i<5; i++) {
            levels1[i] = new Level[1];
        }
        Bakery bakery2("bakeryTwo", &b2, levels1);
        cout << bakery2.get_levels(); 

        for (int i=0; i<5; i++) {
            delete[] levels1[i];
        }
        delete [] levels1;
    }
};

#endif