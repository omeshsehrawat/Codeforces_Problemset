#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	int min=100, max=0;
	int min_index, max_index;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(min>=arr[i])
		{
			min=arr[i];
			min_index=i;
		}
		if(max<arr[i])
		{
			max = arr[i];
			max_index = i;
		}
	}
		
	if(max_index==0 && min_index==n-1)
	{
		cout<<0;
	}
	if(max_index==0 && min_index!=n-1)
	{
		cout<<n-1-min_index;
	}
	if(max_index!=0 && min_index==n-1)
	{
		cout<<max_index;
	}
	if(max_index!=0 && min_index!=n-1)
	{
		if(max_index<min_index)
		{
			cout<<max_index+(n-1-min_index);
		}
		else 
		{
			cout<<max_index+(n-1-min_index)-1;
		}
	
	}
	return 0;
}