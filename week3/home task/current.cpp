#include<iostream>
using namespace std;

int main()
{
  float current;
  int charge;
  cout<<"enter the charge (Q) in coulombs:";
  cin>>charge;
  int time;
  cout<<"enter the time(t) in seconds:";
  cin>>time;
  
  current=charge/time;
  cout<<"the current (I) is= "<<current;
  return 0;
}