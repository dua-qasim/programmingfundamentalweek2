#include <iostream>
using namespace std;

void toyotaBlue(string company[][2], string color[][2], int rows)
{
    cout << "\nToyota Blue Cars:\n";

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(company[i][j] == "Toyota" && color[i][j] == "Blue")
            {
                cout << "Toyota Blue Car Found at [" << i << "][" << j << "]\n";
            }
        }
    }
}

int redCars(string color[][2], int rows)
{
    int count = 0;

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(color[i][j] == "Red")
            {
                count++;
            }
        }
    }

    return count;
}

int nissanCars(string company[][2], int rows)
{
    int count = 0;

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(company[i][j] == "Nissan")
            {
                count++;
            }
        }
    }

    return count;
}

int converter(string color[][2], int rows, string searchColor)
{
    int count = 0;

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(color[i][j] == searchColor)
            {
                count++;
            }
        }
    }

    return count;
}

void transpose(int matrix[][3], int rows)
{
    cout << "\nTranspose Matrix:\n";

    for(int j=0; j<3; j++)
    {
        for(int i=0; i<rows; i++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    const int rows = 3;

    string company[rows][2] =
    {
        {"Toyota", "Nissan"},
        {"Honda", "Toyota"},
        {"Nissan", "Toyota"}
    };

    string color[rows][2] =
    {
        {"Blue", "Red"},
        {"Black", "Blue"},
        {"Red", "Blue"}
    };

    toyotaBlue(company, color, rows);

    cout << "\nTotal Red Cars: "
         << redCars(color, rows);

    cout << "\nTotal Nissan Cars: "
         << nissanCars(company, rows);

    cout << "\nTotal Blue Cars: "
         << converter(color, rows, "Blue");

    int matrix[3][3] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    transpose(matrix, rows);

    return 0;
}