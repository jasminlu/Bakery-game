#include "Level.h" //includes header file
#include <iostream> //includes library
#include <string.h>//includes library
#include <fstream>//includes library
#include <string>//includes library
using namespace std;

Level::Level() { currentscore = 0; } //default constructor for class level

 // constructor for class level
Level::Level(DrinksRecipe* drink1, SweetRecipe* sweet1, std::string drinkName1, std::string sweetName1) {
    drink = drink1; //sets variable as parameter
    sweet = sweet1; //sets variable as parameter
    drinkName = drinkName1; //sets variable as parameter
    sweetName = sweetName1; //sets variable as parameter
    currentscore = 0; //sets variable as 0
}

DrinksRecipe* Level::get_drinksRecipe() { //defines class function
    return drink; //returns class variable
}

SweetRecipe* Level::get_sweetRecipe() { //defines class function
    return sweet; //returns class variable
}

std::string Level::get_drinkName() { //defines class function
    return drinkName; //returns class variable
}

std::string Level::get_sweetName() { //defines class function
    return sweetName; //returns class variable
}

bool Level::guess1(DrinksRecipe* recipe) { //defines class function
    int milk_guess, chocolatepowder_guess, coffee_guess, whippedcream_guess, caramel_guess = 0; //sets variables equal to 0
    int thisLevelScore = 0; //sets variable equal to 0
    if (recipe->get_num_Ingredients() >= 2) { //if class function greater or equal to an integer
        std::cout << "Enter amount of milk: "; //prints text
        std::cin >> milk_guess; //asks user for input
        if (recipe->get_milk2() == milk_guess) { thisLevelScore++; } //if user input is equal to class function
        std::cout << "Enter amount of chocolate powder: "; //prints text
        std::cin >> chocolatepowder_guess; //asks user for input
        if (recipe->get_chocolatepowder() == chocolatepowder_guess) { thisLevelScore++; }  //if user input is equal to class function
    } 
    if (recipe->get_num_Ingredients() >= 3) { //if class function greater or equal to an integer
        std::cout << "Enter amount of coffee: "; //prints text
        std::cin >> coffee_guess; //asks user for input
        if (recipe->get_coffee() == coffee_guess) { thisLevelScore++; }  //if user input is equal to class function
    }
    if (recipe->get_num_Ingredients() >= 4) { //if class function greater or equal to an integer
        std::cout << "Enter amount of whipped cream: "; //prints text
        std::cin >> whippedcream_guess; //asks user for input
        if (recipe->get_whippedcream() == whippedcream_guess) { thisLevelScore++; }  //if user input is equal to class function
    } 
    if (recipe->get_num_Ingredients() >= 5) { //if class function greater or equal to an integer
        std::cout << "Enter amount of caramel: "; //prints text
        std::cin >> caramel_guess; //asks user for input
        if (recipe->get_caramel() == caramel_guess) { thisLevelScore++; } //if user input is equal to class function
    }
    currentscore = currentscore + recipe->get_num_Ingredients(); //adds class function return value to variable 
    if (thisLevelScore == recipe->get_num_Ingredients()) { //if variable is equal to class function return value
        return true; //returns bool value
    }
    return false; //returns bool value
}

bool Level::guess2(SweetRecipe* recipe) { //defines class function
    int milk_guess, eggs_guess, flour_guess, sugar_guess, cinnamon_guess = 0; //sets variables equal to 0
    int thisLevelScore = 0; //sets variable equal to 0
    if (recipe->get_num_Ingredients() >= 3) { //if class function greater or equal to an integer
        std::cout << "Enter amount of milk: "; //prints text
        std::cin >> milk_guess;; //asks user for input
        if (recipe->get_milk() == milk_guess) { thisLevelScore++; } //if user input is equal to class function
        std::cout << "Enter amount of eggs: "; //prints text
        std::cin >> eggs_guess;; //asks user for input
        if (recipe->get_eggs() == eggs_guess) { thisLevelScore++; } //if user input is equal to class function
        std::cout << "Enter amount of flour: "; //prints text
        std::cin >> flour_guess;; //asks user for input
        if (recipe->get_flour() == flour_guess) { thisLevelScore++; }//if user input is equal to class function
    } 
    if (recipe->get_num_Ingredients() >= 4) { //if class function greater or equal to an integer
        std::cout << "Enter amount of sugar: "; //prints text
        std::cin >> sugar_guess;; //asks user for input
        if (recipe->get_sugar() == sugar_guess) { thisLevelScore++; } //if user input is equal to class function
    } 
    if (recipe->get_num_Ingredients() >= 5) { //if class function greater or equal to an integer
        std::cout << "Enter amount of cinnamon: "; //prints text
        std::cin >> cinnamon_guess;; //asks user for input
        if (recipe->get_cinnamon() == cinnamon_guess) { thisLevelScore++; } //
    }
    currentscore = currentscore + recipe->get_num_Ingredients();//adds class function return value to variable 
    if (thisLevelScore == recipe->get_num_Ingredients()) {//if variable is equal to class function return value
        return true; //returns bool value
    }
    return false; //returns bool value
}

void Level::try_again() { //defines class function
    std::cout << std::endl; //prints new line
    std::cout << "You achieved a score of " << currentscore << std::endl; //prints text and variable
    ifstream file("ButtercupBakeryScores.txt");//opens text file
    int line;//sets variable with integer type
    file >> line;//sets variable as a line in the text file
    if (currentscore > line) {//if a variable is equal to this line
        file.close(); //closes file
        fstream file("ButtercupBakeryScores.txt", fstream::out | fstream::trunc); //opens file but writeable
        file << currentscore; //writes variable to file
    }
    file.close(); //closes text file
    file.open ("ButtercupBakeryScores.txt"); //opens text file
    string line2; //defines variable with string type
    getline(file, line2); //gets line from the file
    std::cout<<"Your highscore is: " << line2 << std::endl; //prints text and variable
    file.close(); //closes file
}

int Level::get_currentscore() { //defines class function
    return currentscore; //returns class variable
}

void Level::set_currentscore(int currentscore1) { //defines class function
    currentscore = currentscore1; //sets class variable as parameter
}