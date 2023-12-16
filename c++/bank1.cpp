 #include <iostream>
#include <string>
using namespace std;
class bank
{
  public:
  string name;
  int account;
  float balance;
  bank()
  {
    name="sadhvika";
    account=123456;
    balance=123456;
  }
  ~bank()
  {
cout<<"destructor called\n"<<endl;
    }
  void display()
  {
    cout<<"name is:"<<name<<endl;
    cout<<"account is:"<<account<<endl;
    cout<<"balance is:"<<balance<<endl;
  }
};
int main()
{
  bank b;
  b.display();
}
