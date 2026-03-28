#include<iostream>
using namespace std;
main()
{
    int n , count;
    cout<<"Enter the number of elements:";
    cin >> n;
    
    int arr[n];
    cout<<"Enter"<< n <<"number";

    for(int i = 0; i< n; i++)
    {
      cin >> arr[i];
    }

    for(int i = 0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            count++;
        }
    }
    cout<<"Total even numbers:"<<count;
}