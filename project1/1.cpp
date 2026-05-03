#include <iostream>
#include <conio.h>
using namespace std;

// ===== FUNCTIONS =====

void viewPerfumes(string perfumes[], int price[], int quantity[], int total)
{
    cout << "Name\t\tPrice\tQuantity\n";
    for (int i = 0; i < total; i++)
    {
        cout << perfumes[i] << "\t" << price[i] << "\t" << quantity[i] << endl;
    }
}

void addPerfume(string perfumes[], int price[], int quantity[], int &total)
{
    cin.ignore();
    cout << "Enter Perfume Name: ";
    getline(cin, perfumes[total]);

    cout << "Enter Price: ";
    cin >> price[total];

    cout << "Enter Quantity: ";
    cin >> quantity[total];

    total++;
}

void searchPerfume(string perfumes[], int price[], int total)
{
    string name;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    for (int i = 0; i < total; i++)
    {
        if (perfumes[i] == name)
        {
            cout << "Found: " << perfumes[i] << " Price: " << price[i] << endl;
            return;
        }
    }
    cout << "Not Found!\n";
}

void updatePrice(string perfumes[], int price[], int total)
{
    string name;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    for (int i = 0; i < total; i++)
    {
        if (perfumes[i] == name)
        {
            cout << "Enter New Price: ";
            cin >> price[i];
            cout << "Updated!\n";
            return;
        }
    }
    cout << "Perfume not found!\n";
}

void buyPerfume(string perfumes[], int price[], int quantity[], int total,
                string soldperfumes[], int soldqty[], int soldbill[], int &salesCount)
{
    string name;
    int qty, bill = 0;
    bool found = false;

    cin.ignore();
    cout << "Enter Perfume Name: ";
    getline(cin, name);

    cout << "Enter Quantity: ";
    cin >> qty;

    for (int i = 0; i < total; i++)
    {
        if (perfumes[i] == name)
        {
            found = true;

            if (quantity[i] >= qty)
            {
                bill = price[i] * qty;
                quantity[i] -= qty;

                cout << "Total Bill: " << bill << endl;

                soldperfumes[salesCount] = perfumes[i];
                soldqty[salesCount] = qty;
                soldbill[salesCount] = bill;
                salesCount++;

                cout << "Purchase Successful!\n";
            }
            else
            {
                cout << "Not enough stock!\n";
            }
            break;
        }
    }

    if (!found)
        cout << "Perfume not found!\n";
}

// ===== MAIN =====

int main()
{
    string perfumes[50] = {"Prime edenrobe", "Dior Sauvage", "Alpha Men", "Janan by J."};
    int price[50] = {4000, 20000, 4500, 7500};
    int quantity[50] = {30, 50, 10, 35};

    string soldperfumes[50];
    int soldqty[50];
    int soldbill[50];

    int total = 4;
    int salesCount = 0;

    int user;

    while (true)
    {
        system("cls");
        cout << "1. Admin\n2. Customer\nChoose: ";
        cin >> user;

        // ===== ADMIN =====
        if (user == 1)
        {
            int choice;
            while (true)
            {
                system("cls");
                cout << "1. Add\n2. View\n3. Search\n4. Update Price\n5. Back\n";
                cin >> choice;

                if (choice == 1)
                    addPerfume(perfumes, price, quantity, total);
                else if (choice == 2)
                    viewPerfumes(perfumes, price, quantity, total);
                else if (choice == 3)
                    searchPerfume(perfumes, price, total);
                else if (choice == 4)
                    updatePrice(perfumes, price, total);
                else if (choice == 5)
                    break;

                getch();
            }
        }

        // ===== CUSTOMER =====
        else if (user == 2)
        {
            int choice;
            while (true)
            {
                system("cls");
                cout << "1. View\n2. Search\n3. Buy\n4. Back\n";
                cin >> choice;

                if (choice == 1)
                    viewPerfumes(perfumes, price, quantity, total);
                else if (choice == 2)
                    searchPerfume(perfumes, price, total);
                else if (choice == 3)
                    buyPerfume(perfumes, price, quantity, total,
                               soldperfumes, soldqty, soldbill, salesCount);
                else if (choice == 4)
                    break;

                getch();
            }
        }
    }

    return 0;
}
