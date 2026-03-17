#include<iostream>
using namespace std;
main()
{
    int number,find,temp,count = 0;
    cout<<"Enter a number";
    cin>>number;
    cout<<"Enter a digit to find a frequency";
    cin>>find;

    if(number == 0 && find == 0)
    {
        count = 1;
    }
    else
    {
       while(temp > 0)
       {
        int last_digit = temp % 10;
         if(last_digit == find)
       {
        count++;
       }
       temp /=10;
       }
    }
    cout<<"frequency"<<count;
}