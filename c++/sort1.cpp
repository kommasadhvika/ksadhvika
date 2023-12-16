#include<iostream>
#include<cmath>
using namespace std;
int power(int a,int b)
{
  return pow(a,b);
}
float power(float c,float d)
{
  return pow(c,d);
}
int main()
{
  int a,b;
  float c,d;
  cin>>a>>b>>c>>d;
  cout<<"power="<<power(a,b)<<endl;
  cout<<"power="<<power(c,d)<<endl;
}
