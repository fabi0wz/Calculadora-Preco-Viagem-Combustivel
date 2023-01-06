## Inputs to receive:
* Fuel Price /liter
* Vehicle Consumption l/100km
* Kms in trip
* Days of work / month

## Outputs
Price in eur of money spent per
* Day 
* Week
* Month
* Year

## Variables

`VehicleConsumptions` = cin >> Vehicle Consumptions l/100km  
`FuelPrice` = cin >> FuelPrice  
`TripKms` = cin >> TripKms  
`TotalLiters` = Result of tripKms calculation  
`TotalPrice` = Result of the calculation of price  

100 = `VehicleConsumptions`

`TripKms` = `TotalLiters` => `TripKms` * `VehicleConsumptions` / 100

at this point i have how many liters of fuel my trip takes

`TotalLiters` * `FuelPrice` = `TotalPrice`

# Features to add:

- [ ] Size of Car Fuel Tank

* [ ] Calculate how much time a full fuel tank lasts
* [ ] Calculate best time to fill the fuel tank
* [ ] Different calculations for highway trip and inner city trip
* [ ] Menu to calculate a single trip or print all the costs for a adily routine
    >ex: menu where you insert the kms you gonna do on that trip and it calculates the fuel cost, and another menu option where you insert all the prices and it says how much you spend per day on your daily home -> work routine


