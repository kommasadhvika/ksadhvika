#include<iostream>
using namespace std;
class complex
{
  public:
  int real;
  int imag;
  complex()
  {
    real=0;
    imag=0;
  }
  complex operator-(complex &n)
  {
    complex temp;
    temp.real=real-n.real;
    temp.imag=imag-n.imag;
    return temp;
  }
  void display()
  {
    cout<<"real:"<<real<<"\nimaginary:"<<imag;
  }
};
int main()
{
  complex c1,c2;
  cout<<"enter real and imaginary:"<<endl;
  cin>>c1.real>>c1.imag;
  cout<<"enter real and imaginary:"<<endl;
  cin>>c2.real>>c2.imag;
  complex c3;
  c3=c1-c2;
  c3.display();
}
