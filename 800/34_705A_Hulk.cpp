#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0 && i==n)
			cout<<"I love it ";
		else if(i==n && i%2!=0)
			cout<<"I hate it ";
		else if(i%2==0)
			cout<<"I love that ";
		else
			cout<<"I hate that ";
	}
	return 0;
}
