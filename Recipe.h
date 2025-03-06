#ifndef RECIPE_H
#define RECIPE_H

#include <iostream>

//This Recipe class is an abstract class, specifically required to get the type of recipe used in a particular level. 
//The vitual functions can be also seen in the child classes 'Drink' and 'Sweet' 
//and later implemented in classes 'DrinksRecipe' and 'SweetReceipe', repectively. 

class Recipe {
    public:
	    Recipe();
        virtual std::string get_type() = 0;

	    virtual int get_num_Ingredients() = 0;

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

        ~Recipe(); 
};

#endif
