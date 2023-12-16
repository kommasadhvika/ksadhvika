#include<iostream>
using namespace std;
int main()
{
  int arr[]={1,2,3,6,5};
  int l=sizeof(arr)/sizeof(arr[0]);
  int i,max,secondmax;
  max=secondmax=arr[0];
  for(i=0;i<=l;i++)
  {
    if(arr[i]>max)
    {
      max=secondmax;
    max=arr[i];
    }
    else if (arr[i]>secondmax&&arr[i]<max)
    {
      secondmax=arr[i];
    }
    }
  cout<<"first max"<<max<<endl;
  cout<<"second max"<<secondmax<<endl;
  return 0;
}
