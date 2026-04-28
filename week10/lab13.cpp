#include<iostream>
#include<string>
using namespace std;

string timeTravel(int hours, int minutes) {
    minutes = minutes + 15;

    if(minutes >= 60) {
        hours = hours + 1;
        minutes = minutes - 60;
    }

    if(hours == 24) {
        hours = 0;
    }


    return to_string(hours) + ":" + to_string(minutes);
}

int main() {
    int h, m;
    cout << "Enter Hours: ";
    cin >> h;
    cout << "Enter Minutes: ";
    cin >> m;

    cout << timeTravel(h, m) << endl;
    return 0;
}
