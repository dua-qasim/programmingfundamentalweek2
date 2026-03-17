#include <iostream>
using namespace std;

int main() {
    int age, machinePrice, toyPrice;
    int money = 0;
    int toys = 0;
    int i;

    // Input data
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> machinePrice;
    cout << "Enter the unit price of each toy: ";
    cin >> toyPrice;

    // Calculate money and toys
    i = 1;
    while (i <= age) {
        if (i % 2 == 0) {
            money = money + 10 + (i / 2 - 1) * 10;
            toys = toys + 1;
        } else {
            // do nothing for odd birthdays (just receive toys)
        }
        i = i + 1;
    }

    // Brother took 1 USD from each even birthday amount
    money = money - (age / 2);

    // Selling toys
    int totalMoney = money + toys * toyPrice;

    // Check if money is enough
    if (totalMoney >= machinePrice) {
        cout << "Yes! " << totalMoney - machinePrice << endl;
    } else {
        cout << "No! " << machinePrice - totalMoney << endl;
    }

    return 0;
}
