#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int s=5, c=0;
	int time_left = 240-k;
	for(int i=1;i<=n;i++)
	{
		int p = 5*i;
		if(time_left>=p)
		{
			time_left-=p;
			c++;
		}
		else
		{
			break;
		}
	}
	cout<<c;

	return 0;
}