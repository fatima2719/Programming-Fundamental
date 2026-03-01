#include<iostream>
using namespace std;

int main()
{
  int initial;
  cout<<"Enter Initial velocity:";
  cin>>initial;

  int acceleration;
  cout<<"Enter acceleration:";
  cin>>acceleration;

  int time;
  cout<<"Enter Time:";
  cin>>time;

  int final_velocity;
  final_velocity = acceleration * time + initial;

  cout<<"The Final velocity :" <<final_velocity;

} 