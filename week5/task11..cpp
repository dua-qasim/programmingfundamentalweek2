#include <iostream>
using namespace std;

string displayMenu() {
    cout << "\n--- Simple Calculator ---" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Clear Screen" << endl;
    cout << "6. Exit" << endl;
}

int main() {
    int choice = 0;
    float num1, num2;
    while (choice != 6) {
        displayMenu();
        cout << "Enter your choice (1-6): ";

        cin >> choice;
        
        
                else if(choice) {
            case 1:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case 5:
                system("cls"); // Use "clear" for Linux/Mac
                cout << "Screen cleared." << endl;
                break;
            case 6:
                cout << "Exiting Calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 6);
    return 0;
}

        
