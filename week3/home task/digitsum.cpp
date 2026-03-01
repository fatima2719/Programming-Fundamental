#include <iostream>
using namespace std;

int main()
{
  int sum = 0;
  int digit;
  cout<<"Enter a 4-digit number :";
  cin>>digit;

  int num1;
  num1 = digit % 10;
  digit = digit / 10;

  int num2;
  num2 = digit % 10;
  digit = digit / 10;

  int num3;
  num3 = digit % 10;
  digit = digit / 10;

  int num4;
  num4 = digit % 10;
   
  sum = num1 + num2 + num3 + num4;

  cout<<"The sum of the number is :"<<sum;
}


  