#include<iostream>
using namespace std;

int main()
{
   string name ;
   cout<<"Enter the student's name : ";
   cin>>name;

   int matricmarks;
   cout<< "Enter matriculation marks :";
   cin>>matricmarks;
   float matricpercentage;
   matricmarks=matricmarks*100/1100;

   int intermarks;
   cout<<"Enter the intermediate marks :";
   cin>>intermarks;
   float interpercentage;
   intermarks=intermarks*100/550;

   int ecatmarks;
   cout<<"Enter ECAT marks :";
   cin>>ecatmarks;
   float ecatpercentage;
   ecatmarks=ecatmarks*100/400;

   float aggregate=(matricmarks*0.1+intermarks*0.40+ecatmarks*0.50);
   
   cout<<"aggregate score of "<<name<<" is "<<aggregate;
   return 0;
   
   






}