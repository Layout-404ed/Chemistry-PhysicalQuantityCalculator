// implementation file
#include "PhysicalQuantityCalculator.hpp"

PhysicalQuantityCalculator::PhysicalQuantityCalculator()
    : lambda(-1), nu(-1), energy(-1){}
PhysicalQuantityCalculator::~PhysicalQuantityCalculator()
{
    lambda = 0;
    nu = 0;
    energy = 0;
}

void PhysicalQuantityCalculator::setLambda(double lambda){
    lambda = this->lambda;
}
void PhysicalQuantityCalculator::setNu(double nu){
    nu = this->nu;
}
void PhysicalQuantityCalculator::setEnergy(double energy){
    energy = this->energy;
}

double PhysicalQuantityCalculator::input(double& var){
    std::cout << NAME(var);
}