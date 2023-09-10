#include <iostream>
#include "cpu.h"


void CPUCommands::lock_on(){
    std::cout<<"Locked on"<<std::endl;
    
    isLockedOn = true;

}


