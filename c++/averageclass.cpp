#include <iostream>
using namespace std;
class Average{
    public:
    static float calcAvg(float a, float b, float c){
        return (a + b + c) / 3;
    }
};


int main(){
    cout<<"Enter three numbers: ";
    float a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"The average is: "<<Average::calcAvg(a,b,c)<<endl;
    return 0;
}
