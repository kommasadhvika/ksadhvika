#include <iostream>
using namespace std;
class vehicle
{
  public:
  void drive()
  {
    cout<<"vehicles available"<<endl;
  }
};
class car:public vehicle
{
public:
void drive()
{
cout<<"car"<<endl;
}
};
class truck:public vehicle
{
public:
void drive()
{
cout<<"truck"<<endl;
}
};
int main()
{
vehicle a;
car b;
  truck c;
  a.drive();
  b.drive();
  c.drive();
  return 0;
}








