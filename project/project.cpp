#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int user;
    string perfumes[50] = {"Prime edenrobe", "Dior Suavage", "Alpha Men", "Janan by J."};
    int price[50] = {4000, 20000, 4500, 7500};
    int quantity[50] = {30, 50, 10, 35};
    // SALES HISTORY
    string soldperfumes[50];
    int soldqty[50];
    int soldbill[50];

    int total = 4;
    int salesCount = 0;
    while (true)
    {
        system("cls");
        system("cls");

        cout << "======= MANAR FRAGNANCES =======" << endl;
        cout << "1. Admin " << endl;
        cout << "2. Customer" << endl;

        cout << "choose option : ";
        cin >> user;
        cout << "you choose " << user << endl;
        // ==========ADMIN==========

        if (user == 1)
        {
            while (true)
            {
                string choice;
                system("cls");
                cout << "====ADMIN MENU====" << endl;
                cout << "1. Add Perfumes" << endl;
                cout << "2. View Perfumes" << endl;
                cout << "3. Search Perfumes" << endl;
                cout << "4. Update Price" << endl;
                cout << "5. View Sales " << endl;
                cout << "6. Exit" << endl;
                cout << "Enter your Choice : ";
                cin >> choice;
                if (choice == "1")
                {
                    system("cls");
                    cin.ignore();
                    cout << "Enter Perfume Name : ";
                    getline(cin, perfumes[total]);
                    cout << "Enter Price : ";
                    cin >> price[total];
                    cout << "Enter Quantity : ";
                    cin >> quantity[total];
                    total++;
                }
                else if (choice == "2")
                {
                    system("cls");
                    cout << "  Name\t\tPrice\tQuantity" << endl;
                    for (int i = 0; i < total; i++)
                    {
                        cout << perfumes[i] << "\t" << price[i] << "\t" << quantity[i] << endl;
                    }
                    cout << "\nPress any key to continue...";
                    getch();
                }
                else if (choice == "3")
                {
                    system("cls");
                    string search;
                    cin.ignore();
                    cout << "Enter Name : ";
                    getline(cin, search);
                    for (int i = 0; i < total; i++)
                    {
                        if (perfumes[i] == search)
                        {
                            cout << "Found = Name : " << perfumes[i] << " & " << "Price : " << price[i] << endl;
                        }
                    }
                    cout << "Press any key to continue...";
                    getch();
                }
                else if (choice == "4")
                {
                    system("cls");
                    string name;
                    cin.ignore();
                    cout << "Enter Name : ";
                    getline(cin, name);
                    for (int i = 0; i < total; i++)
                    {
                        if (perfumes[i] == name)
                        {
                            cout << "Enter New Price : ";
                            cin >> price[i];
                        }
                    }
                    cout << "Price Updated Successfully!" << endl;
                    cout << "\nPress any key to continue...";
                    getch();
                }
                else if (choice == "5")
                {
                    system("cls");

                    cout << "---- Sales History----" << endl;
                    cout << "Name\t\t   Quantity\t\tBill" << endl;
                    for (int i = 0; i < salesCount; i++)
                    {
                        cout << soldperfumes[i] << "\t\t" << soldqty[i] << "\t\t" << soldbill[i] << endl;
                    }
                    cout << "\nPress any key to continue...";
                    getch();
                }
                else if (choice == "6")
                {
                    break;
                }
                else
                {
                    cout << "Wrong Choice! Enter Again..." << endl;
                    cout << "Press any key to continue...";
                    getch();
                }
            }
        }
        //========CUSTOMER=========
        else if (user == 2)
        {
            string customerOptions;

            while (true)

            {
                system("cls");
                cout << "----CUSTOMER MENU----" << endl;
                cout << "1. View Perfumes" << endl;
                cout << "2. Search Perfumes" << endl;
                cout << "3. Buy Perfumes" << endl;
                cout << "4. Check Availability" << endl;
                cout << "5. Exit" << endl;
                cout << "Enter you choice : ";
                cin >> customerOptions;

                if (customerOptions == "1")
                {
                    system("cls");
                    cout << "Name\t\tPrice" << endl;
                    for (int i = 0; i < total; i++)
                    {
                        cout << perfumes[i] << "\t" << price[i] << endl;
                    }
                    cout << "\nPress any key to continue...";
                    getch();
                }
                else if (customerOptions == "2")
                {
                    system("cls");

                    string name;
                    cin.ignore();
                    cout << "Enter name : " << endl;
                    getline(cin, name);
                    for (int i = 0; i < total; i++)
                    {
                        if (perfumes[i] == name)
                        {
                            cout << "Available : " << perfumes[i] << endl;
                        }
                    }
                }
                else if (customerOptions == "3")
                {
                    system("cls");

                    string name;
                    int qty;
                    int bill = 0;
                    bool found = false;

                    cin.ignore();
                    cout << "==== BUY PERFUME ====" << endl;
                    cout << "Enter Perfume Name : ";
                    getline(cin, name);
                    cout << "Enter Quantity : ";
                    cin >> qty;

                    for (int i = 0; i < total; i++)
                    {
                        if (perfumes[i] == name)
                        {
                            found = true;
                            
                            if (quantity[i] >= qty)
                            {
                                bill = price[i] * qty;
                                quantity[i] -= qty; // Deduct from stock

                                cout << "Total Bill : " << bill << endl;

                               
                                if (salesCount < 50)
                                {
                                    soldperfumes[salesCount] = perfumes[i];
                                    soldqty[salesCount] = qty;
                                    soldbill[salesCount] = bill;
                                    salesCount++;
                                    cout << "Purchase Successful!" << endl;
                                }
                                else
                                {
                                    cout << "Purchase Successful !" << endl;
                                }
                            }
                            else
                            {
                                cout << "Error: Not enough stock! (Available: " << quantity[i] << ")" << endl;
                            }
                            break;
                        }
                    }

                    if (!found)
                    {
                        cout << "Error: Perfume '" << name << "' not found in our catalog." << endl;
                    }

                    cout << "\nPress any key to continue...";
                    getch();
                }
                else if (customerOptions == "4")
                {
                    system("cls");

                    for (int i = 0; i < total; i++)
                    {
                        cout << "Name : " << perfumes[i] << "\tQuantity : " << quantity[i] << endl;
                    }
                    cout << "\nPress any key to continue...";
                    getch();
                }
                else if (customerOptions == "5")
                {
                    break;
                }
                else
                {
                    cout << "Wrong choice!...Enter again";
                    cout << "\nPress any to continue...";
                    getch();
                }
            }
        }
    }

    return 0;
}