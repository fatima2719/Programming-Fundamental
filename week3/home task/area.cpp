#include<iostream>
using namespace std;

int main()
{
  float length;
  float width;
  float area;
  cout << "Enter the length of rectangle : ";
  cin>>length;
  cout << "Enter the width of rectangle : ";
  cin>> width;

  area = length * width;
  
  cout << "The are of rectangle is : " <<area;
  return 0;
}
  