#include<iostream>
using namespace std;

int main()
{
 float size;
 cout<<"Enter the size of the fertilizer bag in pounds:";
 cin>>size;

 float cost;
 cout<<"Enter cost of the bag:";
 cin>>cost;

 float area;
 cout<<"Enter the area in square feet that can be covered by the bag:";
 cin>>area;

 float costprice;
 costprice = cost / size;

 float costarea;
 costarea = cost / area;

 cout<<"cost of fertilizae per pound : $"<< costprice << endl;
 cout<<"cost of fertilizing per square foot : $"<< costarea;
}