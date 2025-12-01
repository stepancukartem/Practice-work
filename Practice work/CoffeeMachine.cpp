#include "CoffeeMachine.h"

CoffeeMachine::CoffeeMachine()
{
    coffee = 50;
    cups = 50;
    moneyCoffee = 0;
}

void CoffeeMachine::Refill()
{
    cout << "Додано 50 кави і 50 стаканів\n";
    coffee += 50;
    cups += 50;
}

void CoffeeMachine::TakeMoneyCoffee()
{
    cout << "Знято: " << moneyCoffee << " грн\n";
    moneyCoffee = 0;
}

void CoffeeMachine::ShowCoffeeStats() const
{
    cout << "Кава: " << coffee << "\n";
    cout << "Стакани: " << cups << "\n";
    cout << "Продано на: " << moneyCoffee << " грн\n";
}

void CoffeeMachine::BuyCoffee()
{
    if (coffee > 0 && cups > 0)
    {
        coffee--;
        cups--;
        moneyCoffee += 25;
        cout << "Ваша кава! 25 грн.\n";
    }
    else cout << "Кава недоступна!\n";
}