#include<iostream>
using namespace std;
class employee
{
  public:
  virtual void calculatepay(){}
};
class manager:public employee
{
  public:
  void calculatepay()
  {
  cout<<"manager salary : 30000"<<endl;
  }
};
class engineer:public employee
{
 public:
 void calculatepay()
 {
 cout<<"engineer salary : 10000";
 }
};
int main()
{
  employee*e[2];
  manager m1;
  e[1]=&m1;
  m1.calculatepay();
  engineer e2;
  e[2]=&e2;
  e2.calculatepay();
  
}
