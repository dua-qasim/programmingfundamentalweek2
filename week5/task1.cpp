#include <iostream>
using namespace std;

string printTable(int num) {
    string table="";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    printTable(number);
    return 0;
}
