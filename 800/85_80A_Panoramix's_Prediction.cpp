#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, c=0, p=0, num;
	cin>>n>>m;
	for(int i=n+1; i<=m; i++)
	{
		p=0;
		for(int j=2; j<i; j++)
		{
			if(i%j == 0)
			{
				p++;
			}
		}
		if(p==0)
		{
			num = i;
			c++;
		}
		
	}
	if(c==1 && num == m)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}