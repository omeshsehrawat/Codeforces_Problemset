#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int h, m;
		cin>>h>>m;
		int res = (23-h)*60 + (60-m);
		cout<<res<<endl;
	}	
	return 0;
}