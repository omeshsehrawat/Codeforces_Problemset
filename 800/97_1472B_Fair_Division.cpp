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
		int p=0,r=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]==1)
				p++;
			else
				r++;
		}
		if((p%2==0 && r%2==0)||(r%2!=0 && p%2==0 && p!=0 ))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}