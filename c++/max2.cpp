#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"enter the a,b,c values:\n";
  cin>>a>>b>>c;
  (a>b&&a>c)?cout<<"a is bigger":(b>a&&b>c)?cout<<"b is bigger":cout<<"c is bigger";
  cout<<"\n";
  return 0;
}
