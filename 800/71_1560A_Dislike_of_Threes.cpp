#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int j = 1, p =1;
		while(j<=n)
		{
			if(p%3==0 || p%10 == 3)
			{
				p = p+1;
			}
			else
			{
				p = p+1;
				j++;
			}
		}
		cout<<p-1<<endl;
	}
	return 0;
}