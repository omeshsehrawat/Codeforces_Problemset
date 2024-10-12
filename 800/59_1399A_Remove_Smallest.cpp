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
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr, arr+n);
		int c=0;
		for(int i=0;i<n-1;i++)
		{
			int sub = arr[i+1] - arr[i];
			if(sub==0 || sub == 1)
			{
				continue;
			}
			else
			{
				c++;
			}
		}
		if(c!=0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}