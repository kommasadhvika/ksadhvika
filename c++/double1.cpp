#include<iostream>
using namespace std;
int main()
{
  double a;
  cin>>a;
  double *p=&a;
  cout<<"number:"<<a<<endl;
  cout<<"value:"<<p<<endl;
}
