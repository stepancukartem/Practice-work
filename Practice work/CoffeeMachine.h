#pragma once
#include <iostream>
using namespace std;

class CoffeeMachine
{
private:
    int coffee;  
    int cups;   
    double moneyCoffee;

public:
    CoffeeMachine();

    void Refill();
    void TakeMoneyCoffee();
    void ShowCoffeeStats() const;

    void BuyCoffee();
};

