#include<iostream>
using namespace std;
main()
{
    int n , sum = 0;
    cout<<"Enter number of elemets:";
    cin>>n;
    int arr[n];
    cout<<"Enter" <<n<<"numbers:";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }
      cout<<"Sum off all elements:"<<sum<<endl;
}