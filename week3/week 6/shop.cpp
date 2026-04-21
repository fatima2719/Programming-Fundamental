#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter number of products:";
    cin>>n;

    string names[n];
    double prices[n];
    int quantity[n];

    for(int i = 0; i<n;i++)
    {
        cout<<"Enter name:";
        cin>>names[i];
        cout<<"Enter prices:";
        cin>>prices[i];
        cout<<"Enter quantity:";
        cin>>quantity[i];
    }
    for(int i =0; i<n; i++)
    {
        cout<<names[i] <<": $" << prices[i] <<"," << quantity[i] <<" in stock, Total value: $" << prices[i] * quantity[i] <<endl;
    }
}