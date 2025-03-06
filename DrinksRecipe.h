#ifndef DRINKSRECIPE_H
#define DRINKSRECIPE_H

#include "DrinksRecipe.h"
#include "Drinks.h"

//This class is a public inheritance of the abstract class Drinks. 
//It includes the implementation of the a virtual functions from the Recipe class. 

class DrinksRecipe : public Drinks {
    private: 
        int num_Ingredients;
        std::string type;
    public:
        DrinksRecipe(int milk1, int chocolatepowder1, int coffee1, int whippedcream1, int caramel1, std::string type1);  

        int get_milk() { return 0; }; 
        int get_eggs() { return 0; }; 
        int get_flour() { return 0; };
        int get_sugar() { return 0; }; 
        int get_cinnamon() { return 0; }; 

        int get_coffee() { return coffee; }
        int get_milk2() { return milk2; }
        int get_chocolatepowder() { return chocolatepowder; }
        int get_whippedcream() { return whippedcream; }
        int get_caramel() { return caramel; }

        std::string get_type();
        int get_num_Ingredients();
};

#endif