#include <iostream>
using namespace std;

int main() {
    int n, num, p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    cout << "Enter the number of integers: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num < 200) p1++;
        else if (num < 400) p2++;
        else if (num < 600) p3++;
        else if (num < 800) p4++;
        else p5++;
    }
    cout << "p1 (<200): ";
    for (int i = 0; i < p1; i++) cout << "*";
    cout << endl;

    cout << "p2 (200-399): ";
    for (int i = 0; i < p2; i++) cout << "*";
    cout << endl;

    cout << "p3 (400-599): ";
    for (int i = 0; i < p3; i++) cout << "*";
    cout << endl;

    cout << "p4 (600-799): ";
    for (int i = 0; i < p4; i++) cout << "*";
    cout << endl;

    cout << "p5 (800+): ";
    for (int i = 0; i < p5; i++) cout << "*";
    cout << endl;

    return 0;
}
