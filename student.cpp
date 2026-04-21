#include<iostream>
using namespace std;
main()
{
  string name[5];

  cout<<"Enter names of the 5 students:" <<endl;

  for(int i = 0; i<5; i++)
  {
    cin>>name[i];
  }
  for(int i = 0;i<5; i++)
  {
    cout<< name[i]<< endl;
  }
  cout<< "Students names are:"<<name[5]<<endl;
}