#include<iostream>
using namespace std;
class animal
{
  public:
  virtual void move(){}
};
class bird
{
  public:
  void move()
  {
    cout<<"bird will fly";
  }
};
class fish
{
  public:
  void move()
  {
    cout<<"fish will swim";
  }
}
