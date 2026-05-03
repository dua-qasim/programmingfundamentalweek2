#include <iostream>
#include <conio.h>
using namespace std;

// ===== FUNCTION DECLARATIONS =====
void adminMenu(string perfumes[], int price[], int quantity[], int &total,
               string soldperfumes[], int soldqty[], int soldbill[], int &salesCount);

void customerMenu(string perfumes[], int price[], int quantity[], int total,
                  string soldperfumes[], int soldqty[], int soldbill[], int &salesCount);

void addPerfume(string perfumes[], int price[], int quantity[], int &total);
void viewPerfumes(string perfumes[], int price[], int quantity[], int total);
void searchPerfume(string perfumes[], int price[], int total);
void updatePrice(string perfumes[], int price[], int total);
void viewSales(string soldperfumes[], int soldqty[], int soldbill[], int salesCount);
void buyPerfume(string perfumes[], int price[], int quantity[], int total,
                string soldperfumes[], int soldqty[], int soldbill[], int &salesCount);
void checkAvailability(string perfumes[], int quantity[], int total);

// ===== MAIN FUNCTION =====
int main()
{
    int user;

    string perfumes[50] = {"Prime edenrobe", "Dior Suavage", "Alpha Men", "Janan by J."};
    int price[50] = {4000, 20000, 4500, 7500};
    int quantity[50] = {30, 50, 10, 35};

    string soldperfumes[50];
    int soldqty[50];
    int soldbill[50];

    int total = 4;
    int salesCount = 0;

    while (true)
    {
        system("cls");
        cout << "======= MANAR FRAGNANCES =======" << endl;
        cout << "1. Admin " << endl;
        cout << "2. Customer" << endl;
        cout << "Choose option: ";
        cin >> user;

        if (user == 1)
        {
            adminMenu(perfumes, price, quantity, total,
                      soldperfumes, soldqty, soldbill, salesCount);
        }
        else if (user == 2)
        {
            customerMenu(perfumes, price, quantity, total,
                         soldperfumes, soldqty, soldbill, salesCount);
        }
    }

    return 0;
}

// ===== ADMIN MENU =====
void adminMenu(string perfumes[], int price[], int quantity[], int &total,
               string soldperfumes[], int soldqty[], int soldbill[], int &salesCount)
{
    string choice;
    while (true)
    {
        system("cls");
        cout << "==== ADMIN MENU ====" << endl;
        cout << "1. Add Perfume" << endl;
        cout << "2. View Perfumes" << endl;
        cout << "3. Search Perfume" << endl;
        cout << "4. Update Price" << endl;
        cout << "5. View Sales" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == "1")
            addPerfume(perfumes, price, quantity, total);
        else if (choice == "2")
            viewPerfumes(perfumes, price, quantity, total);
        else if (choice == "3")
            searchPerfume(perfumes, price, total);
        else if (choice == "4")
            updatePrice(perfumes, price, total);
        else if (choice == "5")
            viewSales(soldperfumes, soldqty, soldbill, salesCount);
        else if (choice == "6")
            break;
    }
}

// ===== CUSTOMER MENU =====
void customerMenu(string perfumes[], int price[], int quantity[], int total,
                  string soldperfumes[], int soldqty[], int soldbill[], int &salesCount)
{
    string choice;
    while (true)
    {
        system("cls");
        cout << "==== CUSTOMER MENU ====" << endl;
        cout << "1. View Perfumes" << endl;
        cout << "2. Search Perfume" << endl;
        cout << "3. Buy Perfume" << endl;
        cout << "4. Check Availability" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == "1")
            viewPerfumes(perfumes, price, quantity, total);
        else if (choice == "2")
            searchPerfume(perfumes, price, total);
        else if (choice == "3")
            buyPerfume(perfumes, price, quantity, total,
                       soldperfumes, soldqty, soldbill, salesCount);
        else if (choice == "4")
            checkAvailability(perfumes, quantity, total);
        else if (choice == "5")
            break;
    }
}

// ===== FUNCTIONS =====
void addPerfume(string perfumes[], int price[], int quantity[], int &total)
{
    system("cls");
    cin.ignore();
    cout << "Enter Perfume Name: ";
    getline(cin, perfumes[total]);
    cout << "Enter Price: ";
    cin >> price[total];
    cout << "Enter Quantity: ";
    cin >> quantity[total];
    total++;
}

void viewPerfumes(string perfumes[], int price[], int quantity[], int total)
{
    system("cls");
    cout << "Name\t\tPrice\tQuantity\n";
    for (int i = 0; i < total; i++)
        cout << perfumes[i] << "\t" << price[i] << "\t" << quantity[i] << endl;

    getch();
}

void searchPerfume(string perfumes[], int price[], int total)
{
    system("cls");
    string name;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, name);

    for (int i = 0; i < total; i++)
    {
        if (perfumes[i] == name)
            cout << "Found: " << perfumes[i] << " Price: " << price[i] << endl;
    }
    getch();
}

void updatePrice(string perfumes[], int price[], int total)
{
    system("cls");
    string name;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, name);

    for (int i = 0; i < total; i++)
    {
        if (perfumes[i] == name)
        {
            cout << "Enter new price: ";
            cin >> price[i];
        }
    }
    getch();
}

void viewSales(string soldperfumes[], int soldqty[], int soldbill[], int salesCount)
{
    system("cls");
    cout << "Name\tQty\tBill\n";
    for (int i = 0; i < salesCount; i++)
        cout << soldperfumes[i] << "\t" << soldqty[i] << "\t" << soldbill[i] << endl;

    getch();
}

void buyPerfume(string perfumes[], int price[], int quantity[], int total,
                string soldperfumes[], int soldqty[], int soldbill[], int &salesCount)
{
    system("cls");
    string name;
    int qty;

    cin.ignore();
    cout << "Enter Perfume Name: ";
    getline(cin, name);
    cout << "Enter Quantity: ";
    cin >> qty;

    for (int i = 0; i < total; i++)
    {
        if (perfumes[i] == name)
        {
            if (quantity[i] >= qty)
            {
                int bill = price[i] * qty;
                quantity[i] -= qty;

                soldperfumes[salesCount] = name;
                soldqty[salesCount] = qty;
                soldbill[salesCount] = bill;
                salesCount++;

                cout << "Total Bill: " << bill << endl;
            }
            else
                cout << "Not enough stock!\n";
        }
    }
    getch();
}

void checkAvailability(string perfumes[], int quantity[], int total)
{
    system("cls");
    for (int i = 0; i < total; i++)
        cout << perfumes[i] << " -> " << quantity[i] << endl;

    getch();
}