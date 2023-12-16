#include<iostream>
using namespace std;
class person
{
  public:
  char name[100];
  char gender[100];
  int age;
  void read()
  {
    cout<<"enter name:"<<name<<endl;
    cin>>name;
    cout<<"enter gender:"<<gender<<endl;
    cin>>gender;
    cout<<"enter age:"<<age<<endl;
    cin>>age;
    cout<<"name:"<<name<<"\ngender:"<<gender<<"\nage:"<<age;
  }
};
class student:public person
{
public:
 int id;
 int cl;
 char subject[50];
 void read1()
 {
 cout<<"enter id:"<<endl;
 cin>>id;
 cout<<"enter class:"<<endl;
 cin>>cl;
 cout<<"enter subject:"<<endl;
 cin>>subject;
 cout<<"id:"<<id<<"\nclass:"<<cl<<"\nsubject:"<<subject;
 }
};
class teacher:public person
{
public:
int id;
int salary;
char subject[50];
void read2()
{
cout<<"enter id:"<<endl;
cin>>id;
cout<<"enter salary:"<<endl;
cin>>salary;
cout<<"enter subject:"<<endl;
cin>>subject;
cout<<"id:"<<id<<"\nsalary:"<<salary<<"\nsubject:"<<subject;
}
};
int main()
{
  teacher t;
  cout<<"-----------TEACHER------------"<<endl;
  t.read();
  t.read2();
  student s;
  cout<<"----------STUDENT----------"<<endl;
  s.read();
  s.read1();
}
