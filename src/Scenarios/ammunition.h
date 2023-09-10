#include <iostream>
#include <ostream>
#include <string>


class ammunition{

    public:
        virtual void Display() = 0;
        virtual float GetWeight() const = 0;



};

class Mpat : public ammunition{
    public:
        const float weight = 53.4;

        void Display() override {
            std::cout << "You have selected MPAT round\n";
            std::cout << "Weight: " << weight << std::endl;
        }


        float GetWeight() const override {
            return weight;
            };
};


class Heat : public ammunition{
    public:
        const float weight = 50.5;
        void Display() override{
            std::cout << "You have selected HEAT round\n";
            std::cout << "Weight: " << weight << std::endl;
        }

        float GetWeight() const override {
            return weight;
            };
};