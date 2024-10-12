#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++)
	{
		cin>>arr[i];
	}
	int big = arr[0], small = arr[0], c=0;
	for(int i=1;i<t;i++)
	{
		if(arr[i]>big)
		{
			big = arr[i];
			c++;
		}
		if(arr[i]<small)
		{
			small = arr[i];
			c++;
		}
	}
	cout<<c;
	return 0;
}