#pragma once
#include <iostream>
using namespace std;

class FuelStation
{
private:
    double petrol;   
    double diesel;   
    double gas;  

    double pricePetrol;
    double priceDiesel;
    double priceGas;

    double moneyFuel;

public:
    FuelStation();

    void AddFuel();
    void ShowFuel() const;
    void ChangePrices();
    void TakeMoneyFuel();
    void ShowFuelStats() const;

    void SellFuelByMoney();
    void SellFuelByLiters();
};