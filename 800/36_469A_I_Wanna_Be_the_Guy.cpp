#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int *arr1 = new int[100];
	int *arr2 = new int[100];
	int *arr3 = new int[200];
	int j=0;
	cin>>arr1[0];
	for(int i=1;i<=arr1[0];i++)
	{
		cin>>arr1[i];
		arr3[j]=arr1[i];
		j++;
	}
	cin>>arr2[0];
	for(int i=1;i<=arr2[0];i++)
	{
		cin>>arr2[i];
		arr3[j]=arr2[i];
		j++;	
	}
	int c=0;
	for(int i=1;i<=t;i++)
	{
		int p=0;
		for(int k=0;k<j;k++)
		{
			if(i==arr3[k])
				p++;
		}
		if(p!=0)
			c++;
	}
	if(c==t)
		cout<<"I become the guy.";
	else
		cout<<"Oh, my keyboard!";
	return 0;
}