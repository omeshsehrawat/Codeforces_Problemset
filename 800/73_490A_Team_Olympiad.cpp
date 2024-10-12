#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int a=0,b=0,c=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
			a++;
		else if(arr[i]==2)
			b++;
		else
			c++;
	}
	int p = min(min(a,b),c);
	cout<<p<<endl;
	int arr1[p],arr2[p],arr3[p];
	int i=0,j=0,k=0,l=0;
	while(i<p || j<p || k<p)
	{
		if(arr[l]==1 && i<p)
		{
			arr1[i] = l;
			i++;
		}
		else if(arr[l]==2 && j<p)
		{
			arr2[j] = l;
			j++;
		}
		else if(arr[l]==3 && k<p)
		{
			arr3[k] = l;
			k++; 
		}
		l++;
	}
	for(int i=0;i<p;i++)
	{
		cout<<arr1[i]+1<<" "<<arr2[i]+1<<" "<<arr3[i]+1<<endl;
	}
	return 0;
}