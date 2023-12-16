#include<iostream>
using namespace std;
class add
{
  int n;
  public:
  add()
  {
    n=0;
  }
  add(int a)
  {
    n=a;
  }
  void display()
  {
    cout<<"no="<<n;
  }
  add operator +=(add &t)
  {
    add temp;
    temp.n=n+t.n;
    return temp;
  }
};
int main()
{
  add obj1(10),obj2(20);
  add obj3;
  obj3=obj1+=obj2;
  obj3.display();
  return 0;
}
