//include all the librarys and class header files
#include "Bakery.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//defining function level which has two parameters and returns a bool variable
bool level(Level* level, int currentLevel) {
    system("clear"); //clears the terminal
    if (currentLevel == 0) { //if statement that determines if a variable is equal to an integer
        std::cout << "  _      ________      ________ _        __ " << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |    |  ____\\ \\    / /  ____| |      /_ |" << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |    | |__   \\ \\  / /| |__  | |       | |" << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |    |  __|   \\ \\/ / |  __| | |       | |" << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |____| |____   \\  /  | |____| |____   | |" << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " |______|______|   \\/   |______|______|  |_|" << std::endl;   
        std::cout << std::endl; //prints new line
    } else if (currentLevel == 1) { //if statement that determines if a variable is equal to an integer
        std::cout << "  _      ________      ________ _        ___  " << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |    |  ____\\ \\    / /  ____| |      |__ \\ " << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |    | |__   \\ \\  / /| |__  | |         ) |" << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |    |  __|   \\ \\/ / |  __| | |        / / " << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |____| |____   \\  /  | |____| |____   / /_ " << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " |______|______|   \\/   |______|______| |____|" << std::endl;  
        std::cout << std::endl;   //prints new line                                      
    } else if (currentLevel == 2) { //if statement that determines if a variable is equal to an integer
        std::cout << "  _      ________      ________ _        ____  " << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |    |  ____\\ \\    / /  ____| |      |___ \\ " << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |    | |__   \\ \\  / /| |__  | |        __) |" << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |    |  __|   \\ \\/ / |  __| | |       |__ < " << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |____| |____   \\  /  | |____| |____   ___) |" << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " |______|______|   \\/   |______|______| |____/ " << std::endl;  
        std::cout << std::endl;      //prints new line                                      
    } else if (currentLevel == 3) {
        std::cout << "  _      ________      ________ _        _  _   " << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |    |  ____\\ \\    / /  ____| |      | || |  " << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |    | |__   \\ \\  / /| |__  | |      | || |_ " << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |    |  __|   \\ \\/ / |  __| | |      |__   _|" << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |____| |____   \\  /  | |____| |____     | |  " << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " |______|______|   \\/   |______|______|    |_|  " << std::endl;  
        std::cout << std::endl;   //prints new line                                          
    } else if (currentLevel == 4) { //if statement that determines if a variable is equal to an integer
        std::cout << "  _      ________      ________ _        _____ " << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |    |  ____\\ \\    / /  ____| |      | ____|" << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |    | |__   \\ \\  / /| |__  | |      | |__  " << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |    |  __|   \\ \\/ / |  __| | |      |___ \\ " << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " | |____| |____   \\  /  | |____| |____   ___) |" << std::endl;
        usleep(500000); //sleeps for 0.5 seconds
        std::cout << " |______|______|   \\/   |______|______| |____/ " << std::endl;   
        std::cout << std::endl;   //prints new line                                     
    }
    usleep(1000000); //sleeps for 1 second
    std::cout<<"You are making "<<level->get_drinkName()<<"! Here is the recipe, you will have 10 second to memorise it: "<<std::endl;
    std::cout<<std::endl; //prints new line
    usleep(1000000); //sleeps for 1 second
    int ingredients = level->get_drinksRecipe()->get_num_Ingredients(); //sets return value of a class function as a variable
    if (ingredients >= 2) {//if statement that determines if a variable is greater or equal to an integer
        usleep(1000000); //sleeps for 1 second
        std::cout<<" - MILK: "<<level->get_drinksRecipe()->get_milk2()<<" mL's"<<std::endl; //prints a class variable
        usleep(1000000); //sleeps for 1 second
        std::cout<<" - CHOCOLATE POWDER: "<<level->get_drinksRecipe()->get_chocolatepowder()<<" teaspoons"<<std::endl; //prints a class variable
    } if (ingredients >= 4) {//if statement that determines if a variable is greater or equal to an integer
        usleep(1000000); //sleeps for 1 second
        std::cout<<" - COFFEE: "<<level->get_drinksRecipe()->get_coffee()<<" shots"<<std::endl; //prints a class variable
    } if (ingredients >= 4) {//if statement that determines if a variable is greater or equal to an integer
        usleep(1000000); //sleeps for 1 second
        std::cout<<" - WHIPPED CREAM: "<<level->get_drinksRecipe()->get_whippedcream()<<" mL's"<<std::endl; //prints a class variable
    } if (ingredients >=5) {//if statement that determines if a variable is greater or equal to an integer
        usleep(1000000); //sleeps for 1 second
        std::cout<<" - CARAMEL: "<<level->get_drinksRecipe()->get_caramel()<<" pumps"<<std::endl; //prints a class variable
    }
    usleep(10000000); //sleeps for 10 seconds
    system("clear"); //clears the terminal
    std::cout << std::endl; //prints new line
    std::cout << "Time to guess: " << std::endl; //prints text
    usleep(1000000); //sleeps for 1 second
    std::cout<<std::endl; //prints new line
    bool passOrFail = level->guess1(level->get_drinksRecipe()); //sets variable as return value of a class function
    if (passOrFail == false) { //if variable is equal to bool type 'false'
        return false;  //returns bool type
    } else { //if it is equal to 'true'
        std::cout << std::endl; //prints new line
        std::cout << "You passed! Now onto the dessert, " << level->get_sweetName() << "!" << std::endl;
        usleep(1000000); //sleeps for 1 second
        std::cout << std::endl;
        std::cout << "Here is the recipe, you will get 10 seconds to memorise it: " << std::endl;
        std::cout << std::endl; //prints new line
        usleep(1000000); //sleeps for 1 second
        int ingredients = level->get_sweetRecipe()->get_num_Ingredients();
        if (ingredients >= 3) {//if statement that determines if a variable is greater or equal to an integer
            usleep(1000000); //sleeps for 1 second
            std::cout<<" - MILK: "<<level->get_sweetRecipe()->get_milk()<<" mL's"<<std::endl; //prints a class variable
            usleep(1000000); //sleeps for 1 second
            std::cout<<" - EGGS: "<<level->get_sweetRecipe()->get_eggs()<<" eggs"<<std::endl; //prints a class variable
            usleep(1000000); //sleeps for 1 second
            std::cout<<" - FLOUR: "<<level->get_sweetRecipe()->get_flour()<<" mL's"<<std::endl; //prints a class variable
        } if (ingredients >= 4) {//if statement that determines if a variable is greater or equal to an integer
            usleep(1000000); //sleeps for 1 second
            std::cout<<" - SUGAR: "<<level->get_sweetRecipe()->get_sugar()<<" mL's"<<std::endl; //prints a class variable
        } if (ingredients >=5) {//if statement that determines if a variable is greater or equal to an integer
            usleep(1000000); //sleeps for 1 second
            std::cout<<" - CINNAMON: "<<level->get_sweetRecipe()->get_cinnamon()<<" teaspoons"<<std::endl; //prints a class variable
        }
        usleep(10000000); //sleeps for 10 seconds
        system("clear"); //clears the terminal
        std::cout << std::endl; //prints new line
        std::cout << "Time to guess: " << std::endl; //prints text
        usleep(1000000); //sleeps for 10 seconds
        std::cout << std::endl; //prints new line
        bool passOrFail = level->guess2(level->get_sweetRecipe()); //sets variable as return value of a class function
        if (passOrFail == false) {//if variable is equal to bool type 'false'
            return false; //returns bool type
        } else { //if variable is equal to bool type 'true'
            std::cout << std::endl; //prints new line
            usleep(1000000);//sleeps for 1 second
            return true; //returns bool type
        }
    return true; //returns bool type
    }
}

int game() { //defines new function called game which returns and integer variable
    system("clear"); //clears the terminal

    std::cout << "             (" << std::endl; //prints text
    usleep(500000); //sleeps for 0.5 seconds
    std::cout << "          )" << std::endl; //prints text
    usleep(500000); //sleeps for 0.5 seconds
    std::cout << "     __..---..__" << std::endl; //prints text
    usleep(500000); //sleeps for 0.5 seconds
    std::cout << " ,-='  /  |  \\  `=-." << std::endl; //prints text
    usleep(500000); //sleeps for 0.5 seconds
    std::cout << ":--..___________..--;" << std::endl; //prints text
    usleep(500000); //sleeps for 0.5 seconds
    std::cout << " \\.,_____________,./" << std::endl; //prints text
    
    //Ingredient values for recipes
    DrinksRecipe babycino(50, 10, 0, 0, 0, "Drink"); //creates class with specific parameters
    SweetRecipe pancake(200, 4, 200, 0, 0, "Sweet"); //creates class with specific parameters
    DrinksRecipe hotChocolate(110,55,0,0,0,"Drink"); //creates class with specific parameters
    SweetRecipe cupcakes(215, 3, 375, 0, 0, "Sweet"); //creates class with specific parameters
    DrinksRecipe cappucino(50,115,12,0,0, "Drink"); //creates class with specific parameters
    SweetRecipe cake(423, 5, 525, 300, 0, "Sweet"); //creates class with specific parameters
    DrinksRecipe mocha(53,142,86,30,0, "Drink"); //creates class with specific parameters
    SweetRecipe cookie(237, 1, 245, 382, 0, "Sweet"); //creates class with specific parameters
    DrinksRecipe caramelMocha(58,193,87,39,47, "Drink"); //creates class with specific parameters
    SweetRecipe cinnamonRoll(163, 2, 243, 385, 56, "Sweet"); //creates class with specific parameters

    //Storing each recipe in an array of levels 
    Level** Levels = new Level*[5];
    Levels[0] = new Level(&babycino, &pancake, "a BABYCINO", "PANCAKES");
    Levels[1] = new Level(&hotChocolate, &cupcakes, "a HOT CHOCOLATE", "CUPCAKES");
    Levels[2] = new Level(&cappucino, &cake, "a CAPPUCINO", "CAKE");
    Levels[3] = new Level(&mocha, &cookie, "a MOCHA", "COOKIE");
    Levels[4] = new Level(&caramelMocha, &cinnamonRoll, "a CARAMEL MOCHA", "CINNAMON ROLL");

    Baker baker("name"); //creates class with specific parameters
    Bakery bakery("name", &baker, Levels); //creates class with specific parameters

    //creating the classes
    std::string bakerName; //defines string variable
    std::string bakeryName; //defines string variable
    std::cout<<std::endl; //prints new line
    std::cout<<"Please enter your name: "<<std::endl;
    std::cin>>bakerName; //asks user for input into variable
    usleep(1000000); //sleeps for 1 second
    std::cout<<std::endl; //prints new line
    std::cout<<"Please enter the name of your bakery: "<<std::endl;
    std::cin>>bakeryName; //asks user for input into variable
    usleep(1000000); //sleeps for 1 second
    baker.set_name(bakerName); //sets variables in classes to user input using SETTERS
    bakery.set_name(bakeryName); //sets variables in classes to user input using SETTERS
    

    for (int i = 0; i < 5; i++) { //for loop that runs five times
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
            if (playAgain == 1) { //if variable is equal to 1
                delete [] Levels; //deletes array of levels
                game(); //calls game function
            } else { //if variable is not equal to 1
                return 0;  //returns integer 0
            }
        }
    }

    std::cout << "You won, congratulations!" << std::endl; //prints text
    Levels[0]->try_again(); //calls class function
    std::cout <<"Would you like to play again? Type '1' if YES: " <<std::endl;  //prints text
    int playAgain = 0; //sets integer variable equal to 0
    std::cin >> playAgain; //asks for user input into variable
    usleep(1000000); //sleeps for 1 second
    if (playAgain == 1) { //if variable is equal to 1
        delete [] Levels; //deletes array of levels
        game(); //calls game function
    } else { //if variable is not equal to 1
        return 0; //returns integer 0
    }
    return 0; //returns integer 0
}

int main(void) { //defines main function
    game(); //calls game function
    return 0; //returns integer 0
}
