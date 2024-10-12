#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	int c;
	if(a<b)
	{
		cout<<a<<" ";
		c=b-a;
	}
	else
	{
		cout<<b<<" ";
		c =a-b;
	}
	cout<<c/2;
	return 0;
}