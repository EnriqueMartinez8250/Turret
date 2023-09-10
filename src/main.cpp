#include <iostream>
#include "Calibration/Calibration.h"


int main(){
    short choice;
    bool running = true;

    while (running){

        // user selection
        std::cout<<"1. Calibration\n";
        std::cout<<"2. LiveFire\n";
        std::cout<<"Select Turret operation: ";
        std::cin>>choice;
        //
        switch(choice){
            case 1:
                std::cout<<"Calibration operation\n";
                calibration();
                
                running = false;
                break;
            case 2:
                std::cout<<"Live fire operation\n";
                // calibration()
                running = false;
                break;
            default:
                break;
        }

       

    }
}