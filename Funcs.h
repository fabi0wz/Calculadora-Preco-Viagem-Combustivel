#pragma once

#include <iostream>
#include <cmath>

using namespace std;


class Funcs
{
private:
    /* data */
public:

    static void TakeInputs (double &VehicleConsumptions, double &FuelPrice, double &TripKms, int &WorkDays);
    static double TotalLitersCalc (double VehicleConsumptions, double TripKms, double TotalLiters);
    static double TotalPriceCalc (double TotalLiters, double FuelPrice);
    static void CalcPrice (double TotalPrice, int WorkDays);
    
};
