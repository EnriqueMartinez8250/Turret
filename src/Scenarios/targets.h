#include <iostream>


class Infantry{
    public:
        const int target_points = 100;
    void Infantry_Display(){
        std::cout<<"You have shot down the infantry for a total of: "<<target_points<<" points"<<std::endl;
    }
};


class Truck{
    public:
        const int target_points = 200;
    void Truck_Display(){
        std::cout<<"You have shot down the truck for a total of: "<<target_points<<" points"<<std::endl;
    }
};

class Tank{
    public:
        const int target_points = 300;
    void Tank_Display(){
        std::cout<<"You have shot down the tank for a total of:" <<target_points<<" points"<<std::endl;
    }
};