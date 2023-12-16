#include<iostream>
using namespace std;
int main()
{
  int a;
  cin>>a;
  int *p=&a;
  cout<<"number:"<<a<<endl;
  cout<<"address:"<<p<<endl;
}
