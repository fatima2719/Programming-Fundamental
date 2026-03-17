#include <iostream>
using namespace std;

int main() 
{
    int targetyear,inherited_money;
    cout<<"Enter the year";
    cin>>targetyear;
    cout<<"Enter the money";
    cin>>inherited_money;

    int currentAge = 18;

    for (int year = 1800; year <= targetyear; year++)
     {
        if (year % 2 == 0)
        {
            inherited_money -= 12000;
        } 
        else
        {
            inherited_money -= (12000 + 50 * currentAge);
        }
        
        currentAge++;
    }

    
    

    if (inherited_money >= 0) 
    {
        cout << "Yes! He will live a carefree life and will have "<< inherited_money << " dollars left." << endl; 
    } 
    else 
    {
    
        cout << "He will need " << inherited_money 
             << " dollars to survive." << endl;
    }

    return 0;
}