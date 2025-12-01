#include "UserMenu.h"
#include <iostream>
using namespace std;

void UserMenu::Show(FuelStation& fs, CoffeeMachine& cm)
{
    int choice;
    do {
        cout << "\n=== КОРИСТУВАЧ ===\n";
        cout << "1. Заправка на суму\n";
        cout << "2. Заправка літрами\n";
        cout << "3. Купити каву\n";
        cout << "0. Вихід\n";
        cin >> choice;

        switch (choice)
        {
        case 1: fs.SellFuelByMoney(); break;
        case 2: fs.SellFuelByLiters(); break;
        case 3: cm.BuyCoffee(); break;
        }
    } while (choice != 0);
}