#include<iostream>
using namespace std;
int main()
{
    cout<<"==== Library System ====\n";
    cout<<"1. Add Books\n";
    cout<<"2. View Books\n";
    cout<<"3. Borrow Book\n";
    cout<<"4. Issue Book\n";
    cout<<"5. Exit\n";
    int choice;
    cout<<"Enter your choice(1-5):";
    cin>>choice;

    string name;
    cout<<"Enter Book name:";
    cin>>name;

    if(choice == 1)
    {
        cout<<"silent";
    }
    else if(choice == 2)
    {
        cout<<"green";
    }
    else if(choice == 3)
    {
        cout<<"blue";
    }
    else if(choice == 4)
    {
        cout<<"black";
    }
    else
    {
         cout<<"sky";  
    }
    
   
}