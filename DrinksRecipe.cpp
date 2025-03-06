#include "DrinksRecipe.h" //includes header file

//non-default constructor which contains variables from parent class
DrinksRecipe::DrinksRecipe(int milk1, int chocolatepowder1, int coffee1, int whippedcream1, int caramel1, std::string type1) : Drinks(coffee1, milk1, chocolatepowder1, whippedcream1, caramel1, type1) {
    coffee = coffee1; //variable equal to parameter
    milk2 = milk1; //variable equal to parameter
    chocolatepowder = chocolatepowder1; //variable equal to parameter
    whippedcream = whippedcream1; //variable equal to parameter
    caramel = caramel1; //variable equal to parameter
    type = type1; //variable equal to parameter
    num_Ingredients = 0; //variable equal to 0
    if (coffee1 != 0) { num_Ingredients++; } //calcualtes number of ingredients in recipe by determining if variable is equal to 0 or not
    if (milk1 != 0) { num_Ingredients++; } //calcualtes number of ingredients in recipe by determining if variable is equal to 0 or not
    if (chocolatepowder1 != 0) { num_Ingredients++; } //calcualtes number of ingredients in recipe by determining if variable is equal to 0 or not
    if (whippedcream1 != 0) { num_Ingredients++; } //calcualtes number of ingredients in recipe by determining if variable is equal to 0 or not
    if (caramel1 != 0) { num_Ingredients++; } //calcualtes number of ingredients in recipe by determining if variable is equal to 0 or not
} 

int DrinksRecipe::get_num_Ingredients() {
    return num_Ingredients; //class function to return number of ingredients variable in the recipe
}

std::string DrinksRecipe::get_type() { return type; } //returns class variable