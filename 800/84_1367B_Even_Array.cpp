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
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		int even=0, odd=0;
		for(int i=0; i<n; i++)
		{
			int p = i%2;
			int q = arr[i]%2;
			if(p!=q)
			{
				if(p==0)
					even++;
				else
					odd++;
			}
		}
		if(even!=odd)
			cout<<-1<<endl;
		else
			cout<<even<<endl;
	}
	return 0;
}