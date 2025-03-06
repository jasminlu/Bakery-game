#ifndef SWEETRECIPE_H
#define SWEETRECIPE_H

#include "SweetRecipe.h"
#include "Sweet.h"

//This class is a public inheritance of the abstract class Sweet, the third level of inheritance. 
//It includes the implementation of the a virtual functions from the parent class Recipe and child class Sweet.

class SweetRecipe : public Sweet {
    private: 
        int num_Ingredients;
        std::string type;
    public:
        SweetRecipe(int milk1, int eggs1, int flour1, int sugar1, int cinnamon1, std::string type1);
        
        int get_milk() { return milk; }
        int get_eggs() { return eggs; }
        int get_flour() { return flour; }
        int get_sugar() { return sugar; }
        int get_cinnamon() { return cinnamon; }

        int get_coffee() { return 0; }; 
        int get_milk2() { return 0; }; 
        int get_chocolatepowder() { return 0; };
        int get_whippedcream() { return 0; }; 
        int get_caramel() { return 0; }; 

        int get_num_Ingredients();
        std::string get_type();
};

#endif