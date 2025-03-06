#ifndef LEVEL_H
#define LEVEL_H

#include "DrinksRecipe.h"
#include "SweetRecipe.h"

class Level {
    private:
        DrinksRecipe* drink;
        SweetRecipe* sweet;
        int currentscore;
        std::string drinkName;
        std::string sweetName;
    public:
        Level();
        Level(DrinksRecipe* drink1, SweetRecipe* sweet1, std::string drinkName1, std::string sweetName1);
        DrinksRecipe* get_drinksRecipe();
        SweetRecipe* get_sweetRecipe();
        std::string get_drinkName();
        std::string get_sweetName();
        bool guess1(DrinksRecipe* recipe);
        bool guess2(SweetRecipe* recipe);
        void try_again();
        int get_currentscore();
        void set_currentscore(int currentscore1);
};

#endif 

