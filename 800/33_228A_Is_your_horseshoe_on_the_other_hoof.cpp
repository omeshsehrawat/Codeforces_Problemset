#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[4];
	for(int i=0;i<4;i++)
	{
		cin>>arr[i];
	}
	int a[4];
	a[0]=arr[0];
	int t=0;
	for(int i=0;i<4;i++)
	{
		int c=0;
		for(int j=0;j<t;j++)
		{
			if(arr[i]==a[j])
				c++;
		}
		if(c==0)
		{
			a[t]=arr[i];
			t++;
		}
	}
	cout<<4-t;
	return 0;
}