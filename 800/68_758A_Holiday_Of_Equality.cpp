#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int max_value = *max_element(arr, arr+n);
	int sum =0;
	for(int i=0;i<n;i++)
	{
		sum +=(abs(arr[i]-max_value));
	}
	cout<<sum;
	return 0;
}