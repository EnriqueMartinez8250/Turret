#include "scenarios.h"


static std::random_device rd; // obtain a random number from hardware
static std::mt19937 gen(rd()); // seed the generator
static std::uniform_int_distribution<> distr(1, 500); // define the range
static std::uniform_int_distribution<> target_nums(1,10); // spawn random number of targets
static std::string Direction = Directions[rand()%2]; //Randomizes the direction
static std::string Target = Targets[rand()%3]; //Randomizes the targets
static int initial_target_count = target_nums(gen); //Initialize a variable to spawn random number of targets
static int random_distance = distr(gen);





void single_target()
{
    srand(time(0)); //Randomizes number and variables
    std::cout<<"Target direction: "<<Direction<<std::endl;//Directions
    std::cout<<"Target type: "<<Target<<std::endl;//Enemy type Randomizer
    std::cout<<"Enemy is at range: ";
    std::cout<<random_distance << " Meters" <<std::endl;

}

void multiple_target()
{
    srand(time(0)); //randomizes number and variables
    std::cout<<"Target direction: "<<Direction<<std::endl;//Directions
    std::cout<<"Target type: "<<Target<<std::endl; //Enemy type randomizer    
    std::cout<<"Total enemy targets " << initial_target_count<<std::endl; // Demonstrates distance


    for(int n = 0; n < initial_target_count; ++n){ //Use that variable above to iterate of the number of targets 

        std::cout<<"Target at distance of: " << initial_target_count << random_distance << std::endl;  

    }

    //Figure out each distance per target
    
    //Directions


    
}


