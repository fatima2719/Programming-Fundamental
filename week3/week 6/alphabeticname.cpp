#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter number of students:";
    cin>>n;
    string names[n];
    cout<<"Enter names:"<<endl;
    for(int i = 0;i<n; i++)
    {
        cin>>names[i];
    }
    for(int i = 0;i<n; i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(names[i] > names[j])
            {
                string temp = names[i];
               names[i] = names[j];
                names[j] = temp;
            }
        }
       
    }
    cout<<"Sorted names:" <<endl;
        for(int i = 0; i<n; i++)
        {
          cout << names[i] <<endl;
        }
}