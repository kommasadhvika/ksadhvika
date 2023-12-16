#include <iostream>
using namespace std;
int main()
{
	int row,coloumn;
	cout<<"enter row";
	cin>>row;
	cout<<"enter coloumn";
	cin>>coloumn;
	int a[row][coloumn];
	cout<<"enter array elements";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<coloumn;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter array elements\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<coloumn;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
