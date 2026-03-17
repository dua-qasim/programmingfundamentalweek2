#include <iostream>
using namespace std;

int main() {
    int choice = 0;

    while (choice != 6) {
        cout << "\n--- Restaurant Management System ---\n";
        cout << "1. View Food Menu\n";
        cout << "2. Place Order\n";
        cout << "3. View Order Status\n";
        cout << "4. Generate Bill\n";
        cout << "5. Contact Staff\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice == 1)
            cout << "You selected: View Food Menu.\n";
        else if (choice == 6)
            cout << "Exiting...\n";
    }

    return 0;
}