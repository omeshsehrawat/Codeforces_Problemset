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
	/*int h=0,c=0,p=0,ut=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			h=h+arr[i];
		}
		else if(arr[i]<0)
		{
			c=c+arr[i];
		}
		p=h+c;
		if(p<0)
		{
			ut++;
			c=0;
		}
		else
		{
			if(h>=c)
			{
				h=h+c;
				c=0;
			}
			else
			{
				int temp = h;
				h=0;
				c= c+h;
			}
			
		}
	}
	cout<<ut;*/
	int officers=0,c=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0 && officers==0)
		{
			c++;
		}
		else {
			officers += arr[i];
		}
	}
	cout<<c;
	return 0;
}