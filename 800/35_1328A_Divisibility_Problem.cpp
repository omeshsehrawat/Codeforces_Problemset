#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,r;
		cin>>a>>b;
		r = a%b;
		if(r==0)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<b-r<<endl;
		}
	}
	return 0;
}