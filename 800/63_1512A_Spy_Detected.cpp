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
		int arr[n],arr1[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			arr1[i]=arr[i];
		}
		sort(arr, arr+n);
		int c=0;
		int dis = arr[0];
		for(int i=1;i<n;i++)
		{
			if(dis==arr[i])
			{
				c++;
			}
		}
		if(c==0)
		{
			for(int i=0;i<n;i++)
			{
				if(dis == arr1[i])
				{
					cout<<i+1<<endl;
					break;
				}
			}
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				if(dis != arr1[i])
				{
					cout<<i+1<<endl;
					break;
				}
			}
		}
		
	}
	return 0;
}