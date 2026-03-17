#include<iostream>
using namespace std;
int main()
{
   cout<<"=== Simple Calculator ===\n";
   cout<<"1. Addition\n";
   cout<<"2. Subtraction\n";
   cout<<"3. Multiplication\n";
   cout<<"4. Division\n";
   cout<<"5. Clear Screen\n";
   cout<<"6. Exit\n";

   int choice;
   cout<<"Enter your choice:(1-6)";
   cin>>choice;
   
   if(choice == 1)
   {
    int num1,num2,Result;
    cout<<"Enter first number";
    cin>>num1;
    cout<<"Enter second number";
    cin>>num2;
    Result = num1+num2;
    cout<<Result;
   }
   else if(choice == 2)
   {
    int num1,num2,Result;
    cout<<"Enter first number";
    cin>>num1;
    cout<<"Enter second number";
    cin>>num2;
    Result = num1 - num2;
    cout<<Result;
   }
   else if(choice == 3)
   {
    int num1,num2,Result;
    cout<<"Enter first number";
    cin>>num1;
    cout<<"Enter second number";
    cin>>num2;
    Result = num1 * num2;
    cout<<Result;
   }
   else if(choice == 4)
   {
    int num1,num2,Result;
    cout<<"Enter first number";
    cin>>num1;
    cout<<"Enter second number";
    cin>>num2;
    Result = num1 / num2;
    cout<<Result;
   }
   else if(choice == 5)
   {
    cout<<"Clear Screen";
   }
   else
   {
    cout<<"Exit";
   }
}  