#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d=0;
		cin>>a>>b;
		c = abs(a-b);
		if(c%10!=0)
		{
			d=1;
		}
		int j=10;
		while(c)
		{
			int r = c/j;
			d +=r;
			j--;
			c = c%j;
		}
		cout<<d<<endl;
	}
	return 0;
}