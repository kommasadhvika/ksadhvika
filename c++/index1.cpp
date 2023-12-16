#include <iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int e=2,i=0;
	while(i<n)
	{
		if(arr[i]==e)
		{
			
			
			
			break;
			i++;
		}
	}
	if(i<n)
	{
	cout<<"element"<<e<<"is present at index "<<i<<"in the given array";
}
else
{
cout<<"element is not present in the array";
}
return 0;
}
