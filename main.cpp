#include "Funcs.h"

using namespace std;


int main(int argc, char const *argv[])
{
    double VehicleConsumptions, FuelPrice, TripKms;
    double TotalLiters, TotalPrice;
    int WorkDays;

    Funcs::TakeInputs(VehicleConsumptions, FuelPrice, TripKms, WorkDays);
    TotalPrice = Funcs::TotalPriceCalc(Funcs::TotalLitersCalc(VehicleConsumptions, TripKms, TotalLiters), FuelPrice);

    Funcs::CalcPrice(TotalPrice, WorkDays);

    system("pause");

    return 0;   
}
