#include <iostream>
#include <string>
using namespace std;
string reverse(string word);
int main()
{
	char cstring[50];
	cout<<"enter any string\n";
	cin>>cstring;
	string results=reverse(cstring);
	cout<<results;
	
	}
	string reverse(char word[20])
	{
		char a='a';
		char b='b';
		char *front=&a;
		char *rear=&b;
		for(int i=0;i<(strlen(word)/2);i++)
		{
		
		front[0]=word[i];
		rear[0]=word[strlen(word)-1-i];.
		word[i]=*rear;
		word[strlen(word)-1-i=*front];
	}
	return word;
}
