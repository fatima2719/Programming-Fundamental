#include<iostream>
using namespace std;
main()
{
    int number,digit,sum=0;
    cout<<"Enter a number";
    cin>>number;
    cout<<"Enter a digit";
    cin>>digit;

    digit = number;
    while(number != 0)
    {
        int digit1 = number % 10;
        sum += digit;
        number /=10;
    }
    cout<<"Sum of digit is:"<<sum;
}