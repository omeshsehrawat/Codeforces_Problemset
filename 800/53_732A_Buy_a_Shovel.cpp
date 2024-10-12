#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int i=2,c=1, num = n;
	while(1)
	{
		if(num%10 == 0)
		{
			cout<<c;
			break;
		}
		if(num%10 == m)
		{
			cout<<c;
			break;
		}
		num = n*i;
		i++;
		c++;
	}
	return 0;
}