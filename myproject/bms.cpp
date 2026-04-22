#include <iostream>
#include <conio.h>
using namespace std;
main()
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
        cout << endl;

        cout << "========================================" << endl;
        cout << "======== BANK MANAGEMENT SYSTEM ========" << endl;
        cout << "========================================" << endl;

        cout << "1. Open an account" << endl;
        cout << "2. Show account details" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Withdraw" << endl;
        cout << "5. Edit account deyails" << endl;
        cout << "6. Delete account" << endl;
        cout << "7. Search Account" << endl;
        cout << "8. Transfer Money" << endl;
        cout << "9. Show all Acoounts" << endl;
        cout << "10. Change PIN" << endl;
        cout << "11. Total Bank Balance " << endl;
        cout << "12. Exit" << endl;
        cout << "Enter you option" << endl;
        string user_option;
        cin >> user_option;

        cout << "You choose option" << user_option << endl;

        if (user_option == "1")
        {
            // code

            cout << "Enter your Name" << endl;
            cin >> nameArray[count];

            cout << "Enter your Mobile No." << endl;
            cin >> mobileArray[count];

            cout << "Enter your Pin" << endl;
            cin >> pinArray[count];

            accountNumberArray[count] = 1000 + count;

            cout << "Enter initial balance";
            cin >> balanceArray[count];

            count++;

            getch();
            
        }
        else if (user_option == "2")
        {
            // code

            int acc;
            cout << "Enter your Account Number";
            cin >> acc;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (accountNumberArray[i] == acc)
                {
                    cout << "Name:" << nameArray[i] << endl;
                    cout << "Mobile:" << mobileArray[i] << endl;
                    cout << "Balance:" << balanceArray[i] << endl;

                    found = true;

                    break;
                }
            }

            if (!found)
            {

                cout << "Account not Found.." << endl;
            }

            getch();

        }
        else if (user_option == "3")
        {
            // code
            int acc;
            float amount;

            cout << "Enter your Account Number:" << endl;
            cin >> acc;

            for (int i = 0; i < count; i++)
            {
                if (accountNumberArray[i] == acc)
                {

                    cout << "Enter Amount to Deposit: " << endl;
                    cin >> amount;
                    balanceArray[i] += amount;

                    cout << "Deposit Successfully" << endl;

                    break;
                }
            }

            getch();

        }
        else if (user_option == "4")
        {
            // code

            int acc;
            float amount;

            cout << "Enter Account Number" << endl;
            cin >> acc;

            for (int i = 0; i < count; i++)
            {
                if (accountNumberArray[i] == 0)
                {
                    cout << "Enter amount to WithDraw:" << endl;
                    cin >> amount;

                    if (amount <= balanceArray[i])
                    {
                        balanceArray[i] -= amount;
                        cout << "WithDraw Successfully" << endl;
                    }
                    else
                    {
                        cout << "Unsufficient balance!!!...." << endl;
                    }

                    break;
                }
            }

            getch();

        }
        else if (user_option == "5")
        {
            // code
            int acc;
            cout << "Enter you account:" << endl;
            cin >> acc;

            for (int i = 0; i < count; i++)
            {
                if (accountNumberArray[i] == acc)
                {
                    cout << "Enter new name:" << endl;
                    cin >> nameArray[i];

                    cout << "Enter new moile:" << endl;
                    cin >> mobileArray[i];

                    cout << "Account Details Updated..." << endl;

                    break;
                }
            }

            getch();

        }
        else if (user_option == "6")
        {
            // code
            int acc;
            cout << "Enter Account Number:";
            cin >> acc;

            for (int i = 0; i < count; i++)
            {
                if (accountNumberArray[i] == acc)
                {
                    for (int j = i; j < count - 1; j++)
                    {

                        nameArray[j] = nameArray[j + 1];
                        mobileArray[j] = mobileArray[j + 1];
                        pinArray[j] = pinArray[j + 1];
                        accountNumberArray[j] = accountNumberArray[j + 1];
                        balanceArray[j] = balanceArray[j + 1];
                    }
                    count--;

                    cout << "Account Deleted!!.." << endl;
                    break;
                }
            }

            getch();

        }
        else if (user_option == "7")
        {
            int acc;
            cout << "Enter Acoount Number: ";
            cin >> acc;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (accountNumberArray[i] == acc)
                {
                    cout << "Name: " << nameArray[i] << endl;
                    cout << "Balance: " << balanceArray[i] << endl;

                    found = true;
                }
            }

            if (!found)
            {
                cout << "Not Found" << endl;
            }

            getch();

        }
        else if (user_option == "8")
        {
            int fromAccChange;
            int toAccChange;
            float amount;

            cout << "Account Change From : ";
            cin >> fromAccChange;

            cout << "Account Change To : ";
            cin >> toAccChange;

            cout << "Enter Amount : ";
            cin >> amount;

            int fromAccIndex = -1, toAccIndex = -1;

            for (int i = 0; i < count; i++)
            {
                if (accountNumberArray[i] == fromAccChange)
                    fromAccIndex = i;

                if (accountNumberArray[i] == toAccChange)
                    toAccIndex = i;
            }

            if (fromAccIndex != -1 && toAccIndex != -1)
            {
                if (balanceArray[fromAccIndex] >= amount)
                {
                    balanceArray[fromAccIndex] -= amount;
                    balanceArray[toAccIndex] += amount;
                    cout << "Transfer Successful" << endl;
                }
                else
                {
                    cout << "Insufficient Balance" << endl;
                }
            }
            else
            {
                cout << "Invalid Account!" << endl;
            }

            getch();

        }
        else if (user_option == "9")
        {
            for (int i = 0; i < count; i++)
            {
                cout << "Account Number:" << accountNumberArray[i] << endl;
                cout << "Name: " << nameArray[i] << endl;
                cout << "Balance:" << balanceArray[i] << endl;
                cout << "==========================" << endl;
            }

            getch();

        }
        else if (user_option == "10")
        {
            int acc;
            cout << "Account Number:";
            cin >> acc;

            int oldPin;
            cout << "Old Pin: ";
            cin >> oldPin;

            for (int i = 0; i < count; i++)
            {
                if (accountNumberArray[i] == acc && pinArray[i] == oldPin)
                {
                    cout << "New PIN: ";
                    int newPin;
                    cin >> newPin;

                    pinArray[i] = newPin;
                    cout << "PIN Updated" << endl;

                    break;

                }
            }

            getch();

        }
        else if (user_option == "11")
        {
            float total = 0;

            for (int i = 0; i < count; i++)
            {

                total += balanceArray[i];

            }

            cout << "Total Bank Balance: " << total << endl;

            getch();

        }

        else if (user_option == "12")
        {

            break;

        }
        else
        {

            cout << "Wrong Option" << endl;
            getch();

        }
    }

    cout << endl
         << "Thanks for using this software" << endl;
}