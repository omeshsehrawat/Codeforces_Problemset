#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	int arr[a];
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	int c=0,tot=0,sub =0;
	for(int i=0;i<a;i++)
	{
		sub = 5-arr[i];
		if(sub>=b)
		{
			c++;
		}
		if(c==3)
		{
			tot++;
			c=c%3;
		}
	}
	cout<<tot;
	return 0;
}