#include "Bakery.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

bool level(Level* level, int currentLevel) {
    bool passOrFail = level->guess1(level->get_drinksRecipe());
    if (passOrFail == false) {
        return false;
    } else {
        bool passOrFail = level->guess2(level->get_sweetRecipe());
        if (passOrFail == false) {
            return false;
        } else {
            std::cout << std::endl; 
            usleep(1000000);
            return true;
        }
    return true;
    }
}

int game() {
    system("clear");
    //Ingredient values for recipes
    DrinksRecipe babycino(50, 10, 0, 0, 0, "Drink");
    SweetRecipe pancake(200, 4, 200, 0, 0, "Sweet");

    //Storing each recipe in an array of levels 
    Level** Levels = new Level*[1];
    Levels[0] = new Level(&babycino, &pancake, "a BABYCINO", "PANCAKES");

    Baker baker("name");
    Bakery bakery("name", &baker, Levels);

    for (int i = 0; i < 1; i++) {
        bool passOrFail = level(Levels[i], i);
        if(passOrFail==false){
            std::cout << "That is incorrect :(" << std::endl;
            usleep(1000000); //sleeps for 1 second
            Levels[i]->try_again();
            usleep(1000000); //sleeps for 1 second
            std::cout <<"Would you like to play again? Type '1' if YES: " <<std::endl;
            int playAgain = 0;
            std::cin >> playAgain;
            usleep(1000000); //sleeps for 1 second
            if (playAgain == 1) {
                game();
            } else {
                return 0;
            }
        }
    }

    std::cout << "You won, congratulations!" << std::endl;
    Levels[0]->try_again();
    std::cout <<"Would you like to play again? Type '1' if YES: " <<std::endl;
    int playAgain = 0;
    std::cin >> playAgain;
    usleep(1000000); //sleeps for 1 second
    if (playAgain == 1) {
        delete [] Levels;
        game();
    } else {
        return 0;
    }
    return 0;
}

int main(void) {
    game();
    return 0;
}
