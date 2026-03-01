#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter number of sides of polygon:";
  cin>>n;

  int degree = (n - 2)*180;
  
  cout<<"The total sum of internal angles of a:"<<n<<"sided polygon is :"<<degree<<"degress";

  return 0;
}
  
  
  