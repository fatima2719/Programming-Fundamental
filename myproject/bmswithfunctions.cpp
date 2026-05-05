#include <iostream>
#include <conio.h>
using namespace std;

// ===== Function Declarations =====
void openAccount(string name[], string mobile[], int pin[], int accNo[], float balance[], int &count);
void showDetails(string name[], string mobile[], int accNo[], float balance[], int count);
void deposit(int accNo[], float balance[], int count);
void withdraw(int accNo[], float balance[], int count);
void showAll(string name[], int accNo[], float balance[], int count);
float totalBalance(float balance[], int count);

// ===== Main Function =====
int main()
{
    int accounts = 5500;
    int count = 5;

    string nameArray[accounts] = {"Fatima", "Ahmad", "Ali", "Sara", "Ayesha"};
    string mobileArray[accounts] = {"03001234567", "03111234567", "03221234567", "03331234567", "03441234567"};
    int pinArray[accounts] = {1234, 2345, 3456, 4567, 5678};
    int accountNumberArray[accounts] = {1001, 1002, 1003, 1004, 1005};
    float balanceArray[accounts] = {5000.5, 10000.0, 7500.75, 3000.0, 15000.25};

    while (true)
    {
        system("cls");

        cout << "===== BANK MANAGEMENT SYSTEM =====\n";
        cout << "1. Open Account\n";
        cout << "2. Show Details\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. Show All Accounts\n";
        cout << "6. Total Bank Balance\n";
        cout << "7. Exit\n";

        int choice;
        cin >> choice;

        if (choice == 1)
        {
            openAccount(nameArray, mobileArray, pinArray, accountNumberArray, balanceArray, count);
        }
        else if (choice == 2)
        {
            showDetails(nameArray, mobileArray, accountNumberArray, balanceArray, count);
        }
        else if (choice == 3)
        {
            deposit(accountNumberArray, balanceArray, count);
        }
        else if (choice == 4)
        {
            withdraw(accountNumberArray, balanceArray, count);
        }
        else if (choice == 5)
        {
            showAll(nameArray, accountNumberArray, balanceArray, count);
        }
        else if (choice == 6)
        {
            cout << "Total Bank Balance: " << totalBalance(balanceArray, count) << endl;
            getch();
        }
        else if (choice == 7)
        {
            cout << "Thanks for using system\n";
            break;
        }
        else
        {
            cout << "Invalid Option\n";
            getch();
        }
    }
}

// ===== Functions =====

void openAccount(string name[], string mobile[], int pin[], int accNo[], float balance[], int &count)
{
    cout << "Enter Name: ";
    cin >> name[count];

    cout << "Enter Mobile: ";
    cin >> mobile[count];

    cout << "Enter PIN: ";
    cin >> pin[count];

    accNo[count] = 1000 + count;

    cout << "Enter Balance: ";
    cin >> balance[count];

    count++;
    cout << "Account Created!\n";
    getch();
}

void showDetails(string name[], string mobile[], int accNo[], float balance[], int count)
{
    int acc;
    cout << "Enter Account Number: ";
    cin >> acc;

    for (int i = 0; i < count; i++)
    {
        if (accNo[i] == acc)
        {
            cout << "Name: " << name[i] << endl;
            cout << "Mobile: " << mobile[i] << endl;
            cout << "Balance: " << balance[i] << endl;
            getch();
            return;
        }
    }

    cout << "Account Not Found\n";
    getch();
}

void deposit(int accNo[], float balance[], int count)
{
    int acc;
    float amount;

    cout << "Enter Account Number: ";
    cin >> acc;

    for (int i = 0; i < count; i++)
    {
        if (accNo[i] == acc)
        {
            cout << "Enter Amount: ";
            cin >> amount;

            balance[i] += amount;
            cout << "Deposit Successful\n";
            getch();
            return;
        }
    }

    cout << "Account Not Found\n";
    getch();
}

void withdraw(int accNo[], float balance[], int count)
{
    int acc;
    float amount;

    cout << "Enter Account Number: ";
    cin >> acc;

    for (int i = 0; i < count; i++)
    {
        if (accNo[i] == acc)
        {
            cout << "Enter Amount: ";
            cin >> amount;

            if (amount <= balance[i])
            {
                balance[i] -= amount;
                cout << "Withdraw Successful\n";
            }
            else
            {
                cout << "Insufficient Balance\n";
            }

            getch();
            return;
        }
    }

    cout << "Account Not Found\n";
    getch();
}

void showAll(string name[], int accNo[], float balance[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << "Acc No: " << accNo[i] << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Balance: " << balance[i] << endl;
        cout << "----------------------\n";
    }
    getch();
}

float totalBalance(float balance[], int count)
{
    float total = 0;

    for (int i = 0; i < count; i++)
    {
        total += balance[i];
    }

    return total;
}