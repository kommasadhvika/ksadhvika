#include<iostream>
#include<cmath>
using namespace std;
int factorial(int a)
{
    int fact=1,i;
  for(i=1;i<=a;i++)
  {
    fact*=i;
  }
  return fact;
}
float factorial(float b)
{
      int fact=1,i;
  for(i=1;i<= b;i++)
  {
    fact*=i;
  }
  return fact;
}
int main()
{
  int a;
  float b;
  cin>>a>>b;
  cout<<factorial(a)<<endl;
  cout<<factorial(b)<<endl;
}
