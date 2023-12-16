#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter any number\n";
	cin>>n;
	if(n%7==0)
	{
		cout<<"buzz"<<endl;
	}
	else if(n%10==7)
	{
		cout<<"buzz"<<endl;
	}
	else
	cout<<"not buzz"<<endl;
}
