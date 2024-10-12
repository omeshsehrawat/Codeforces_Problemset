#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,sum=0;
		cin>>n>>k;
		int arr1[n],arr2[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr1[i];
		}
		for(int i=0; i<n; i++)
		{
			cin>>arr2[i];
		}
		sort(arr1, arr1+n);
		sort(arr2, arr2+n);
		int i=0,j=n-1;
		for(int m=0; m<k; m++)
		{
			if(arr1[i]<arr2[j])
			{
				int temp = arr1[i];
				arr1[i] = arr2[j];
				arr2[j] = temp;
			}
			i++;
			j--;
		}
		for(int i=0; i<n; i++)
		{
			sum +=arr1[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}