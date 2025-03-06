#include "UTBaker.h"
#include "Baker.h"
#include "UT_Levels.h"
#include "Level.h"
#include "UT_Bakery.h"
#include "Bakery.h"

int main() {
    UTBaker utBaker; 
    utBaker.runTests();
    
    UT_Levels utLevels;
    utLevels.runTests();

    UT_Bakery utBakery; 
    utBakery.runTests();
    return 0; 
}