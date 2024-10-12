#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	double sum = 0.0, res = 0.0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum +=arr[i];
	}
	res = sum/n;
	cout<<res;
	return 0;
}