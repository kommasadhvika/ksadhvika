#include <iostream>
#include <cmath>
using namespace std;
class rectangle
{
  public:
  float l,w,h;
  float volume;
  rectangle()
  {
    l=10;
    w=5;
    h=3;
  }
  ~rectangle()
  {
    cout<<"destructor called"<<endl;
  }
  void calculate()
  {
volume=l*w*h;
    }
  
  void display()
  {
    cout<<"len of box:"<<l<<endl;
    cout<<"wid of box:"<<w<<endl;
    cout<<"hgt of box:"<<h<<endl;
    cout<<"vol of box:"<<volume<<endl;
   }
};
int main()
  {
  rectangle r;
r.calculate();
r.display();
}
  
  
