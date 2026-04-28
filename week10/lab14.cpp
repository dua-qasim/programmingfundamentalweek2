#include<iostream>
#include<string>
using namespace std;

string convertToText(int num) {
    string ones[] = {"", "One", "Two", "Three", "Four", "Five",
                     "Six", "Seven", "Eight", "Nine"};

    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
                      "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty",
                     "Sixty", "Seventy", "Eighty", "Ninety"};

    if(num == 0) return "Zero";

    if(num < 10) {
        return ones[num];
    }
    else if(num < 20) {
        return teens[num - 10];
    }
    else {
        int tenPart = num / 10;
        int onePart = num % 10;

        if(onePart == 0) {
            return tens[tenPart]; 
        } else {
            return tens[tenPart] + ones[onePart]; 
        }
    }
}

int main() {
    int num;
    cout << "Enter number 1-99: ";
    cin >> num;

    if(num < 1 || num > 99) {
        cout << "Invalid input";
    } else {
        cout << convertToText(num) << endl;
    }

    return 0;
}