#include "SweetRecipe.h" //includes header file

//non-default constructor which contains variables from parent class
SweetRecipe::SweetRecipe(int milk1, int eggs1, int flour1, int sugar1, int cinnamon1, std::string type1) : Sweet(milk1, eggs1, flour1, sugar1, cinnamon1, type1) {
    milk = milk1; //variable equal to parameter
    eggs = eggs1; //variable equal to parameter
    flour = flour1; //variable equal to parameter
    sugar = sugar1; //variable equal to parameter
    cinnamon = cinnamon1; //variable equal to parameter
    type = type1; //variable equal to parameter
    num_Ingredients = 0; //variable equal to 0
    if (milk1 != 0) { num_Ingredients++; } //calcualtes number of ingredients in recipe by determining if variable is equal to 0 or not
    if (eggs1 != 0) { num_Ingredients++; } //calcualtes number of ingredients in recipe by determining if variable is equal to 0 or not
    if (flour1 != 0) { num_Ingredients++; } //calcualtes number of ingredients in recipe by determining if variable is equal to 0 or not
    if (sugar1 != 0) { num_Ingredients++; } //calcualtes number of ingredients in recipe by determining if variable is equal to 0 or not
    if (cinnamon1 != 0) { num_Ingredients++; } //calcualtes number of ingredients in recipe by determining if variable is equal to 0 or not
}

int SweetRecipe::get_num_Ingredients() {
    return num_Ingredients; //class function to return number of ingredients variable in the recipe
}

std::string SweetRecipe::get_type() { return type; } //returns class variable