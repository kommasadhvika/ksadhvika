#include <iostream>
using namespace std;
class person
{
  public:
  void greet()
  {
    cout<<"the person says greet"<<endl;
  }
};
class student:public person
{
public:
void greet()
{
cout<<"the student says :good morning teacher"<<endl;
}
};
class teacher:public person
{
public:
void greet()
{
cout<<"the teacher says :good morning"<<endl;
}
};
int main()
{
person a;
  student b;
  teacher c;
  a.greet();
  b.greet();
  c.greet();
  return 0;
}


