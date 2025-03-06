#ifndef SWEET_H
#define SWEET_H

#include "Recipe.h"
#include <iostream>

//This class is inheirtance from the Recipe class, similar to the Drink class. 
//Sweet is an abstract class consisting of multiple virtual functions. 
//Its attributes are the basic ingredients for all of the sweets recipes included in the game. 

class Sweet : public Recipe {
    protected: 
        int milk;
        int eggs;
        int flour;
        int sugar; 
        int cinnamon;
    public:  
        Sweet(int milk1, int eggs1, int flour1, int sugar1, int cinnamon1, std::string type1);
        virtual int get_milk() = 0; 
        virtual int get_eggs() = 0; 
        virtual int get_flour() = 0;
        virtual int get_sugar() = 0; 
        virtual int get_cinnamon() = 0; 
        virtual int get_num_Ingredients() = 0;
        virtual int get_coffee() = 0; 
        virtual int get_milk2() = 0; 
        virtual int get_chocolatepowder() = 0;
        virtual int get_whippedcream() = 0; 
        virtual int get_caramel() = 0; 
        virtual std::string get_type() = 0;
};

#endif