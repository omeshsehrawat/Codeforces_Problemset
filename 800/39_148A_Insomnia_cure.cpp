#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int k,l,m,n,d,c=0;
	cin>>k>>l>>m>>n>>d;
	if(k==1)
	{
		cout<<d;
	}
	else
	{
		for(int i=1;i<=d;i++)
		{
			if(i%k==0 || i%l==0 || i%m==0 ||i%n==0)
			{
				c=c;
			}
			else
			{
				c++;

			}
		}
		cout<<d-c;		
	}
	
	return 0;
}