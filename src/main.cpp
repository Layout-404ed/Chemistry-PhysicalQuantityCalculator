// Physical Quantity Calculator
#include <iostream>
#define NAME(x) std::cout << #x;
#include "PhysicalQuantity.hpp"
#include "PhysicalQuantity.cpp"

void input(int& var);
void display();
void calculate();
int main(void)
{
    PhysicalQuantity quantity;

    std::cout << "Physical Quantity Calculator\n"
              << "____________________________\n";
    //TODO: create input and display method
    int x = 0;

    return 0;
}

void input(int& var){

}
void calculate(PhysicalQuantity* quantity){
    if(quantity->getLambda() > 0){
        quantity->setNu(quantity->C / quantity->getLambda());
        quantity->setEnergy(quantity->H * quantity->getNu());
    }else if(quantity->getNu() > 0){
        quantity->setLambda(quantity->C / quantity->getNu());
        quantity->setEnergy(quantity->H * quantity->getNu());
    }else if(quantity->getEnergy() > 0){
        quantity->setNu(quantity->getEnergy() / quantity->H);
        quantity->setLambda(quantity->C / quantity->getNu());
    }
}
void output(){

}