#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int arr[]={2,5,2,7,9,10,-45,-23};
	size_t len=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+len);
	cout<<"sorted array is";
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
