#ifndef DRINKS_H
#define DRINKS_H

#include <iostream>
#include "Recipe.h"

//This class is inheirtance from the Recipe class
//Drinks is an abstract class consisting of multiple virtual functions
//Its attributes are the basic ingredients for all of the drinks recipes included in the game. 
class Drinks : public Recipe {
    protected: 
        int milk2;
        int chocolatepowder;
        int coffee;
        int whippedcream; 
        int caramel;
    public:  
        Drinks(int milk1, int chocolatepowder1, int coffee1, int whippedcream1, int caramel1, std::string type1);
        virtual int get_milk() = 0; 
        virtual int get_eggs() = 0; 
        virtual int get_flour() = 0;
        virtual int get_sugar() = 0; 
        virtual int get_cinnamon() = 0; 
        virtual int get_coffee() = 0; 
        virtual int get_milk2() = 0; 
        virtual int get_chocolatepowder() = 0;
        virtual int get_whippedcream() = 0; 
        virtual int get_caramel() = 0; 
        virtual int get_num_Ingredients() = 0;
        virtual std::string get_type() = 0;
};

#endif