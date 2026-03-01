#include<iostream>
using namespace std;

int main()
{
  int minutes;
  cout<<"Number of minutes:";
  cin>>minutes;

  int frames;
  cout<<"Frames per second:";
  cin>>frames;

  int length;
  length = minutes * 60 * frames;
  cout<<"total number of frames =" <<length;
}
  