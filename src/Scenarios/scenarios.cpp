#include "scenarios.h"


std::random_device rd; // obtain a random number from hardware
std::mt19937 gen(rd()); // seed the generator
std::uniform_int_distribution<> distr(1, 500); // define the range



void scenario()
{
    srand(time(0)); //Randomizes number and variables

    //Directions
    std:: string Direction = Directions[rand()%2];
    std::cout<<"Target direction: "<<Direction<<std::endl;
    
    //Enemy type Randomizer
    std::string Target = Targets[rand() % 3];
    std::cout<<"Target type: "<<Target<<std::endl;

    //Randomizes the distance
    for(int n=0; n<1; ++n){
        std::cout<<"The enemy is at range: ";
        std::cout << distr(gen) << ' '; // generate numbers
        std::cout<<"Meters"<<std::endl;

    }


}