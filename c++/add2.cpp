#include<iostream>
#include<cmath>
using namespace std;
int sum(int a,int b)
{
  return a+b;
}
int sum(float c,float d)
{
  return c+d;
}
int main()
{
  int a,b;
  float c,d;
  cin>>a>>b>>c>>d;
  cout<<sum(a,b)<<endl;
  cout<<sum(c,d)<<endl;
}
