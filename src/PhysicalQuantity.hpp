// header file
#pragma once
#include <iostream>
#include <string>

class PhysicalQuantity{
    private:
        double lambda, nu, energy; // (m), (s^-1), (j)
    public:
        static constexpr double C = 3.00e8; // speed of light (m/s)
        static constexpr double H = 6.63e-34; // planck's constant (Js)

        PhysicalQuantity();
        ~PhysicalQuantity();

        void setLambda(double lambda);
        void setNu(double nu);
        void setEnergy(double nu);
        
        double getLambda();
        double getNu();
        double getEnergy();
};