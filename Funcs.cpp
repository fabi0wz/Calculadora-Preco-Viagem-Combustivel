#include "Funcs.h"

void Funcs::TakeInputs (double &VehicleConsumptions, double &FuelPrice, double &TripKms, int &WorkDays)
{
    cout << "Enter the current Fuel Price per Liter ";
    cin >> FuelPrice;
    cout << "\nEnter your vehicle consumptions in l/100km ";
    cin >> VehicleConsumptions;
    cout << "\nEnter how many kms you expect to do in your trip ";
    cin >> TripKms;
    cout << "\nHow many days per month do you work? ";
    cin >> WorkDays;

}

double Funcs::TotalLitersCalc(double VehicleConsumptions, double TripKms, double TotalLiters)
{
    TotalLiters = (TripKms * VehicleConsumptions) / 100;
    return TotalLiters;
}

double Funcs::TotalPriceCalc(double TotalLiters, double FuelPrice)
{

    return TotalLiters * FuelPrice;

}

void Funcs::CalcPrice(double TotalPrice, int workDays)
{

    double DAY;
    double WEEK;
    double MONTH;
    double YEAR;

    DAY = TotalPrice;
    WEEK = TotalPrice * 5;
    MONTH = TotalPrice * workDays;
    YEAR = MONTH * 12;

    cout << endl;
    cout << "You spend " << ceil(DAY) << "eur" << " per Day" << endl;
    cout << "You spend " << ceil(WEEK) << "eur" << " per Week" << endl;
    cout << "You spend " << ceil(MONTH) << "eur" << " per Month" << endl;
    cout << "You spend " << ceil(YEAR) << "eur" << " per Year" << endl;
    
}