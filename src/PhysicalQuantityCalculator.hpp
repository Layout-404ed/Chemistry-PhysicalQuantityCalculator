// header file
#pragma once
#include <iostream>
#include <string>
#define NAME(var) name(#var, var)

class PhysicalQuantityCalculator{
    private:
        static constexpr double C = 3.00e8; // speed of light (m/s)
        static constexpr double H = 6.63e-34; // planck's constant (Js)
        double lambda, nu, energy; // (m), (s^-1), (j)
    public:
        PhysicalQuantityCalculator();
        ~PhysicalQuantityCalculator();

        void setLambda(double lambda);
        void setNu(double nu);
        void setEnergy(double nu);

        double input(double& var);
        void display();
};