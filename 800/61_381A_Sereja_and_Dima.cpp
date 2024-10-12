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
	int left = 0,right = n - 1  ;
	int ans[2];
	ans[0] = 0;
	ans[1] = 0;
	int c = 0;
	while (left <= right)
	{
		int big = -1;
		if (arr[left] > arr[right])
		{
			big = arr[left];
			left += 1;
		}
		else
		{
			big = arr[right];
			right -= 1;
		}
		ans[c] += big;
		c = 1 - c;
	}
	cout<<ans[0]<<" "<<ans[1];
	return 0;
}