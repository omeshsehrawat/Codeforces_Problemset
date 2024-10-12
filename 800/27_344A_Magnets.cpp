#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int c=0;
	int arr[t];
	for(int i=0;i<t;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<t-1;i++)
	{
		if(arr[i] != arr[i+1])
			c++;
	}
	cout<<c+1;
	return 0;
}