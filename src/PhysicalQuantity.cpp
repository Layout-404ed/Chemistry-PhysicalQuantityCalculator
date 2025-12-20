// implementation file
#include "PhysicalQuantity.hpp"

PhysicalQuantity::PhysicalQuantity()
    : lambda(-1),
    nu(-1),
    energy(-1){}
PhysicalQuantity::~PhysicalQuantity() = default;

void PhysicalQuantity::setLambda(double lambda){
    this->lambda = lambda;
}
void PhysicalQuantity::setNu(double nu){
    this->nu = nu;
}
void PhysicalQuantity::setEnergy(double energy){
    this->energy = energy;
}

double PhysicalQuantity::getLambda(){
    return lambda;
}
double PhysicalQuantity::getNu(){
    return nu;
}
double PhysicalQuantity::getEnergy(){
    return energy;
}