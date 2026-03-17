#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<=0)
    {
        n++;
    }
    int count=0;

    while(n > 0)
    {
       n /=10;
       count ++;
    }
    cout<<"total number of digit :" <<count;
}