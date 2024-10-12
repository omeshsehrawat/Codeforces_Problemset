#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,b;
		cin>>l>>b;
		if(b>l)
		{
			swap(l,b);
		}
		int b_2 = b*2;
		int maximum = max(l, b_2);
		cout<<maximum*maximum<<endl;
	}
	return 0;
}