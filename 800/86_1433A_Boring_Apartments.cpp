#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		int l = n.length();
		int p = int(n[0]);
		int sum = 0,j=1;
		for(int i=49; i<p; i++)
		{
			sum +=10;
		}
		for(int i=1;i<=l;i++)
		{
			sum +=i;
		}
		cout<<sum<<endl;
	}
	return 0;
}