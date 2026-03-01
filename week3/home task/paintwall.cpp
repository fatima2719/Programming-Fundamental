#include <iostream>
using namespace std;

int main()
{
  int square_meters;
  cout<<"Number of square meters you can paint :";
  cin>>square_meters;

  int width;
  cout<<"Width of the single wall :";
  cin>>width;

  int height;
  cout<<"Height of the single wall :";
  cin>>height;

  int number;
  number = square_meters / (width * height);

  cout<<"Number of walls you can paint:"<<number;
}

  

  