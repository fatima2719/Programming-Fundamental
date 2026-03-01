using namespace std;

int main()
{
  float vegetable;
  cout<<"Enter the vegetables price per kilogram:";
  cin >> vegetable;

  float fruit;
  cout<<"Enter the fruits price per kilogram:";
  cin >> fruit;

  int totalvegetable;
  cout<<"Enter the total kilograms of vegetable:";
  cin >> totalvegetable;

  int totalfruit;
  cout<<"Enter the total kilograms of fruit:";
  cin >> totalfruit;

  int total;
  total = (vegetable * totalvegetable) + (fruit * totalfruit);
  
  int rupees;
  rupees = total/1.94;

  cout<<"Total earnings in Rupees:"<<rupees;
}