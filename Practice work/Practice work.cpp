#include "FuelStation.h"
#include "CoffeeMachine.h"
#include "AdminMenu.h"
#include "AdminMenu.h"
#include "UserMenu.h"

int main()
{
    FuelStation fs;
    CoffeeMachine cm;

    int mode;

    do {
        cout << "\n1. Адмін\n2. Користувач\n0. Вихід\n";
        cin >> mode;

        if (mode == 1) AdminMenu::Show(fs, cm);
        if (mode == 2) UserMenu::Show(fs, cm);

    } while (mode != 0);

    return 0;
}