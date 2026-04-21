#include<iostream>
using namespace std;
main()
{
    int n , largest , smallest;
    cout<<"Enter the number of elements:";
    cin>>n;
    int num[n];
    cout<<"Enter"<< n <<"number:";

    for(int i = 0; i <n; i++)
    {
        cin>>num[i];
    }
    for(int i=0; i<n;i++)
    {
        if(num[i] > largest)
        {
            largest = num[i];
        }
        if(num[i] < smallest)
        {
            smallest = num[i];
        }
        cout<<"Largest number:"<<largest<<endl;
        cout<<"Smallest number:"<<smallest<<endl;
    }
}