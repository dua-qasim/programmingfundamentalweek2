#include <iostream>
using namespace std;

int main() {
    int length, a = 0, b = 1, next, i;
    cout << "Enter the length of the Fibonacci series: ";
    cin >> length;
    cout << a << ", " << b;
    for (i = 2; i < length; i++) {
        next = a + b;
        cout << ", " << next;
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}
