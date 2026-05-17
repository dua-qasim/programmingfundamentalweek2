#include <iostream>
#include <fstream>

using namespace std;

// ===== FUNCTION DECLARATIONS =====

void adminMenu(string perfumes[], int price[], int quantity[], int &total,
               string soldperfumes[], int soldqty[], int soldbill[], int &salesCount);

void customerMenu(string perfumes[], int price[], int quantity[], int &total,
                  string soldperfumes[], int soldqty[], int soldbill[], int &salesCount);

void addPerfume(string perfumes[], int price[], int quantity[], int &total);

void viewPerfumes(string perfumes[], int price[], int quantity[], int total);

void searchPerfume(string perfumes[], int price[], int total);

void updatePrice(string perfumes[], int price[], int total);

void viewSales(string soldperfumes[], int soldqty[], int soldbill[], int salesCount);

void buyPerfume(string perfumes[], int price[], int quantity[], int total,
                string soldperfumes[], int soldqty[], int soldbill[], int &salesCount);

void checkAvailability(string perfumes[], int quantity[], int total);

// FILE HANDLING
void saveData(string perfumes[], int price[], int quantity[], int total);

void loadData(string perfumes[], int price[], int quantity[], int &total);

// ===== MAIN FUNCTION =====

int main()
{
    int user;

    string perfumes[50];
    int price[50];
    int quantity[50];

    string soldperfumes[50];
    int soldqty[50];
    int soldbill[50];

    int total = 0;
    int salesCount = 0;

    // LOAD FILE DATA
    loadData(perfumes, price, quantity, total);

    while (true)
    {
        system("cls");

        cout << "======= MANAR FRAGRANCES =======" << endl;
        cout << "1. Admin " << endl;
        cout << "2. Customer" << endl;
        cout << "3. Exit" << endl;

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

        else if (user == 3)
        {
            break;
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
        {
            addPerfume(perfumes, price, quantity, total);
            saveData(perfumes, price, quantity, total);
        }

        else if (choice == "2")
        {
            viewPerfumes(perfumes, price, quantity, total);
        }

        else if (choice == "3")
        {
            searchPerfume(perfumes, price, total);
        }

        else if (choice == "4")
        {
            updatePrice(perfumes, price, total);
            saveData(perfumes, price, quantity, total);
        }

        else if (choice == "5")
        {
            viewSales(soldperfumes, soldqty, soldbill, salesCount);
        }

        else if (choice == "6")
        {
            break;
        }
    }
}

// ===== CUSTOMER MENU =====

void customerMenu(string perfumes[], int price[], int quantity[], int &total,
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
        {
            viewPerfumes(perfumes, price, quantity, total);
        }

        else if (choice == "2")
        {
            searchPerfume(perfumes, price, total);
        }

        else if (choice == "3")
        {
            buyPerfume(perfumes, price, quantity, total,
                       soldperfumes, soldqty, soldbill, salesCount);

            saveData(perfumes, price, quantity, total);
        }

        else if (choice == "4")
        {
            checkAvailability(perfumes, quantity, total);
        }

        else if (choice == "5")
        {
            break;
        }
    }
}

// ===== ADD PERFUME =====

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

    cout << "\nPerfume Added Successfully!\n";

    cin.ignore();
    cin.get();
}

// ===== VIEW PERFUMES =====

void viewPerfumes(string perfumes[], int price[], int quantity[], int total)
{
    system("cls");

    cout << "Name\t\tPrice\tQuantity\n";

    for (int i = 0; i < total; i++)
    {
        cout << perfumes[i] << "\t"
             << price[i] << "\t"
             << quantity[i] << endl;
    }

    cin.ignore();
    cin.get();
}

// ===== SEARCH PERFUME =====

void searchPerfume(string perfumes[], int price[], int total)
{
    system("cls");

    string name;

    cin.ignore();

    cout << "Enter name: ";
    getline(cin, name);

    bool found = false;

    for (int i = 0; i < total; i++)
    {
        if (perfumes[i] == name)
        {
            cout << "Found: " << perfumes[i]
                 << " Price: " << price[i] << endl;

            found = true;
        }
    }

    if (!found)
    {
        cout << "Perfume Not Found!" << endl;
    }

    cin.get();
}

// ===== UPDATE PRICE =====

void updatePrice(string perfumes[], int price[], int total)
{
    system("cls");

    string name;

    cin.ignore();

    cout << "Enter name: ";
    getline(cin, name);

    bool found = false;

    for (int i = 0; i < total; i++)
    {
        if (perfumes[i] == name)
        {
            cout << "Enter new price: ";
            cin >> price[i];

            found = true;
        }
    }

    if (!found)
    {
        cout << "Perfume Not Found!" << endl;
    }

    cin.ignore();
    cin.get();
}

// ===== VIEW SALES =====

void viewSales(string soldperfumes[], int soldqty[], int soldbill[], int salesCount)
{
    system("cls");

    cout << "Name\tQty\tBill\n";

    for (int i = 0; i < salesCount; i++)
    {
        cout << soldperfumes[i] << "\t"
             << soldqty[i] << "\t"
             << soldbill[i] << endl;
    }

    cin.ignore();
    cin.get();
}

// ===== BUY PERFUME =====

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

    bool found = false;

    for (int i = 0; i < total; i++)
    {
        if (perfumes[i] == name)
        {
            found = true;

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
            {
                cout << "Not enough stock!\n";
            }
        }
    }

    if (!found)
    {
        cout << "Perfume Not Found!" << endl;
    }

    cin.ignore();
    cin.get();
}

// ===== CHECK AVAILABILITY =====

void checkAvailability(string perfumes[], int quantity[], int total)
{
    system("cls");

    for (int i = 0; i < total; i++)
    {
        cout << perfumes[i] << " -> "
             << quantity[i] << endl;
    }

    cin.ignore();
    cin.get();
}

// ===== SAVE DATA =====

void saveData(string perfumes[], int price[], int quantity[], int total)
{
    ofstream file("perfumes.txt");

    for (int i = 0; i < total; i++)
    {
        file << perfumes[i] << endl;
        file << price[i] << endl;
        file << quantity[i] << endl;
    }

    file.close();
}

// ===== LOAD DATA =====

void loadData(string perfumes[], int price[], int quantity[], int &total)
{
    ifstream file("perfumes.txt");

    total = 0;

    while (getline(file, perfumes[total]))
    {
        file >> price[total];
        file >> quantity[total];

        file.ignore();

        total++;
    }

    file.close();

    // DEFAULT DATA
    if (total == 0)
    {
        perfumes[0] = "Prime edenrobe";
        perfumes[1] = "Dior Suavage";
        perfumes[2] = "Alpha Men";
        perfumes[3] = "Janan by J.";

        price[0] = 4000;
        price[1] = 20000;
        price[2] = 4500;
        price[3] = 7500;

        quantity[0] = 30;
        quantity[1] = 50;
        quantity[2] = 10;
        quantity[3] = 35;

        total = 4;

        saveData(perfumes, price, quantity, total);
    }
}