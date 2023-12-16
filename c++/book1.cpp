 #include<iostream>
using namespace std;
class book
{
  private :
  string bookname;
  string author;
  string booktype;
  int price;
  public:
  book()
  {
     bookname="harry potter";
    author="j.k.rowling";
    booktype="mystry";
    price=1500;
  }
  ~book()
  {
    cout<<" :: destructor called :: "<<endl;
  }
  void display()
    {
    cout<<" name of book: "<<bookname<<endl;
    cout<<" name of author : "<<author<<endl;
    cout<<" book type : "<<booktype<<endl;
    cout<<" prize of the book : "<<price<<endl;
  }
    
};
int main()
{
  book b;
  b.display();
}
