#include <iostream>
using namespace std;

void printSum(int arr[][3], int rows)
{
    int sum = 0;

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    cout << "\nThe sum of elements in the matrix is: "
         << sum;
}

int main()
{
    int rows;

    cout << "Enter row size: ";
    cin >> rows;

    int arr[rows][3];

    cout << "Enter the elements of matrix:\n";

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << "Enter element at position ["
                 << i << "][" << j << "]: ";

            cin >> arr[i][j];
        }
    }

    printSum(arr, rows);

    return 0;
}