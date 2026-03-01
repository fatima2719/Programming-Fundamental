#include<iostream>
using namespace std;

int main()
{
  int mega_bytes;
  cout<<"Enter the size of megabyte:";
  cin>>mega_bytes;
  
  int kilo_bytes = mega_bytes * 1024;
  int bytes = kilo_bytes * 1024;
  int bits = bytes * 8;

  cout<<"the "<<mega_bytes<< " MB is equal to " <<bits;

  return 0;
}

  