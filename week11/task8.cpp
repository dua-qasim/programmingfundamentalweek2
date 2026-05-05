
#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 5;

void largestColumnFirst(int M[ROWS][COLS]) {
    int maxSum = M[0][0] + M[1][0] + M[2][0]; // Pehle column ka sum
    int maxColIndex = 0;

    // Step 1: Har column ka sum nikalo aur max wala dhoondo
    for (int j = 1; j < COLS; j++) {
        int colSum = 0;
        for (int i = 0; i < ROWS; i++) {
            colSum += M[i][j];
        }

        if (colSum > maxSum) {
            maxSum = colSum;
            maxColIndex = j;
        }
    }

    if (maxColIndex!= 0) {
        for (int i = 0; i < ROWS; i++) {
            
            int temp = M[i][0];
            M[i][0] = M[i][maxColIndex];
            M[i][maxColIndex] = temp;
        }
    }
}

void printMatrix(int M[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int M[ROWS][COLS] = {
        {6, 7, 9, 4, 8},
        {3, 2, 7, 4, 1},
        {9, 4, 5, 8, 3}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(M);

    largestColumnFirst(M);

    cout << "\nAfter largestColumnFirst():" << endl;
    printMatrix(M);

    return 0;
}