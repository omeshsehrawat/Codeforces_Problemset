#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,e=0;
		cin>>a>>b>>c>>d;
		if(a<b)
		{
			e++;
		}
		if(a<c)
		{
			e++;
		}
		if(a<d)
		{
			e++;
		}
		cout<<e<<endl;
	}
	return 0;
}