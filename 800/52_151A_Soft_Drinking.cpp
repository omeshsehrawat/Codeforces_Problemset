#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int x= (k*l)/nl;
	int y=c*d;
	int z=p/np;
	int small =x;
	if(y<small)
	{
		small = y;
	}
	if(z<small)
	{
		small=z;
	}
	int result = small/n;
	cout<<result;
	return 0;
}