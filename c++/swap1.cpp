#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"enter two numbers:\n";
  cin>>a>>b;
  a=a^b;
  b=a^b;
  a=a^b;
  cout<<"after swaping a "<<a<<endl;
  cout<<"after swaping b "<<b<<endl;
}
