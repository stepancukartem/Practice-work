#include "FuelStation.h"

FuelStation::FuelStation()
{
    petrol = diesel = gas = 0;
    pricePetrol = 62;
    priceDiesel = 59;
    priceGas = 28;
    moneyFuel = 0;
}

void FuelStation::AddFuel()
{
    int type; double amount;
    cout << "1 - Бензин\n2 - Дизель\n3 - Газ\n";
    cin >> type;

    cout << "Скільки літрів додати: ";
    cin >> amount;

    if (type == 1) petrol += amount;
    else if (type == 2) diesel += amount;
    else if (type == 3) gas += amount;
}

void FuelStation::ShowFuel() const
{
    cout << "Бензин: " << petrol << " л\n";
    cout << "Дизель: " << diesel << " л\n";
    cout << "Газ: " << gas << " л\n";
}

void FuelStation::ChangePrices()
{
    cout << "Нова ціна бензину: "; cin >> pricePetrol;
    cout << "Нова ціна дизелю: "; cin >> priceDiesel;
    cout << "Нова ціна газу: "; cin >> priceGas;
}

void FuelStation::TakeMoneyFuel()
{
    cout << "Забрано: " << moneyFuel << " грн\n";
    moneyFuel = 0;
}

void FuelStation::ShowFuelStats() const
{
    cout << "Зароблено на пальному: " << moneyFuel << " грн\n";
}

void FuelStation::SellFuelByMoney()
{
    int type; double money;
    cout << "1-Бензин 2-Дизель 3-Газ: ";
    cin >> type;

    cout << "На яку суму?: ";
    cin >> money;

    double liters = 0;

    if (type == 1) liters = money / pricePetrol;
    if (type == 2) liters = money / priceDiesel;
    if (type == 3) liters = money / priceGas;

    cout << "Видано " << liters << " літрів\n";
    moneyFuel += money;
}

void FuelStation::SellFuelByLiters()
{
    int type; double liters;
    cout << "1-Бензин 2-Дизель 3-Газ: ";
    cin >> type;

    cout << "Скільки літрів?: ";
    cin >> liters;

    double sum = 0;

    if (type == 1) sum = liters * pricePetrol;
    if (type == 2) sum = liters * priceDiesel;
    if (type == 3) sum = liters * priceGas;

    cout << "До сплати: " << sum << " грн\n";
    moneyFuel += sum;
}