 #include<iostream>
using namespace std;
class person
{
  public:
  virtual void work(){}
};
class employee : public person
{
public:
void work()
{
cout<<"employee"<<endl;
}
};
class manager : public person
{
public:
void work()
{
cout<<"manager";
}
};
int main()
{
  person *p[2];
  employee e1;
  p[2]=&e1;
  manager m1;
  p[1]=&m1;
  p[1]->work();
  p[2]->work();
}
