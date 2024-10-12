#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	char arr[n];
	cin>>arr;
	int a_n=0,d_n=0;
	for(int i=0;arr[i]!='\0';i++)
	{
		if(arr[i]=='A')
			a_n++;
		else
			d_n++;
	}
	if(a_n>d_n)
	{
		cout<<"Anton";
	}
	else if(a_n<d_n)
	{
		cout<<"Danik";
	}
	else
	{
		cout<<"Friendship";
	}
	return 0;
}