#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int x,y;
	cin>>x>>y;
	int arr[x];
	int value,c=0;
	for(int i=0;i<x;i++)
	{
		cin>>arr[i];
		if(i==(y-1))
			value=arr[i];
	}
	for(int i=0;i<x;i++)
	{
		if((arr[i]>=value)&&arr[i]>0)
			c++;
	}
	cout<<c;
	return 0;
}