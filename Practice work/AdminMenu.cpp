#include "AdminMenu.h"
#include <iostream>
using namespace std;

void AdminMenu::Show(FuelStation& fs, CoffeeMachine& cm)
{
    int choice;
    do {
        cout << "\n=== АДМІН МЕНЮ ===\n";
        cout << "1. Поповнити пальне\n";
        cout << "2. Переглянути запаси\n";
        cout << "3. Змінити ціни\n";
        cout << "4. Заправити кавовий автомат\n";
        cout << "5. Забрати гроші\n";
        cout << "6. Статистика\n";
        cout << "0. Вихід\n";
        cin >> choice;

        switch (choice)
        {
        case 1: fs.AddFuel(); break;
        case 2: fs.ShowFuel(); break;
        case 3: fs.ChangePrices(); break;
        case 4: cm.Refill(); break;
        case 5: fs.TakeMoneyFuel(); cm.TakeMoneyCoffee(); break;
        case 6: fs.ShowFuelStats(); cm.ShowCoffeeStats(); break;
        }
    } while (choice != 0);
}