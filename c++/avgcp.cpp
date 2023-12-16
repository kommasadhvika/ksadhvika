#include<iostream>
using namespace std;
class greatest
{
        private:
                int x,y,z;
    public:
        void input()
        {
                cout<<"Enter values of 3 numbers\n";
                cin>>x>>y>>z;
        }
        void calc()
        {
                int r;
                r=((x>y)&&(x>z)?x:(y>x)&&(y>z)?y:z);
                cout<<"Greatest no:"<<r;
        }
};
int main()
{
        greatest g;
        g.input();
        g.calc();
        
}
