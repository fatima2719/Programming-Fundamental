#include<iostream>
using namespace std;

int main()
{
 int hour;
 cout<<"Enter hour:";
 cin>>hour;

 
 int minutes = hour * 60;
 int seconds = minutes * 60;

 cout<<"the number of hour "<<hour<<"is equal to "<<seconds<<"seconds";
 return 0;
}  