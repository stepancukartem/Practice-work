#include "FuelStation.h"
#include "CoffeeMachine.h"
#include "AdminMenu.h"
#include "UserMenu.h"

#include <iostream>
using namespace std;

int main()
{
    FuelStation fs;
    CoffeeMachine cm;

    int mode;
    do {
        cout << "\n--- АЗС ---\n";
        cout << "1. Адмін режим\n";
        cout << "2. Користувач\n";
        cout << "0. Вихід\n> ";
        cin >> mode;

        if (mode == 1)
            AdminMenu(fs, cm);
        else if (mode == 2)
            UserMenu(fs, cm);

    } while (mode != 0);

    return 0;
}