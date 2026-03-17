#include <iostream>
using namespace std;

int main() {
    int money, year;
    
    
    cin >> money >> year;
    
    int total_spending = 0;
    for (int i = 1800; i <= year; i++) {
        if (i % 2 == 0) {
            total_spending += 12000 + 50 * (i - 1800);
        } else {
            total_spending += 12000;
        }
    }
        if (money >= total_spending) {
        cout << "Yes! He will live a carefree life and will have " 
             << money - total_spending << ".00 dollars left.\n";
    } else {
        cout << "He will need " << total_spending - money 
             << ".00 dollars to survive.\n";
    }
    
    return 0;
}

