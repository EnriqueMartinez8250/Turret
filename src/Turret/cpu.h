#ifndef CPU_H
#define CPU_H
#include <iostream>


class CPUCommands{

    private:
        bool isLaserOn;
        bool isLockedOn;


    public:

        CPUCommands() : isLaserOn(false), isLockedOn(false){}


        void lock_on();

        void target(int targetID, int targetDistance);


        void laser_on();

        void laser_off();

       



};





#endif