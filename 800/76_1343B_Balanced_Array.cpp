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
		if(n%4!=0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
			int a[n/2], b[n/2],j=0, sum1=0,k=1;
			for(int i=1;i<=n/2;i++)
			{
				a[j] = i*2;
				sum1 +=a[j];
				j++;
			}
			for(int i=0;i<(n/2)-1;i++)
			{
				b[i] = k;
				sum1 -= k;
				k = k+2;
			}
			b[(n/2)-1] = sum1;
			for(int i=0;i<(n/2);i++)
			{
				cout<<a[i]<<" ";
			}
			for(int i=0;i<(n/2);i++)
			{
				cout<<b[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}