#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			int a=i%2;
			if(a==0)
			{
				int b=i/2;
				if(b%2!=0 && j==m)
				{
					cout<<"#";
				}
				else if(b%2==0 && j==1)
				{
					cout<<"#";
				}
				else
				{
					cout<<".";
				}
			}
			else
			{
				cout<<"#";
			}
		}
		cout<<endl;
	}
	return 0;
}