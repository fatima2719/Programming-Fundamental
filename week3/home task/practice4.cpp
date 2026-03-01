#include<iostream>
using namespace std;

int main()
{
  
   int DollarPrice = 282;
   int Dollars;
   int Rupees;

   cout << "Enter amount in dollar: ";
   cin>>Dollars;
   Rupees = Dollars * DollarPrice;
  
   cout << "Dollars " <<Dollars<< " Into Rupees are " <<Rupees;
   return 0;
} 