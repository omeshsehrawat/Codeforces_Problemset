#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,n;
		cin>>x>>y>>n;
		int res = ((n-y)/x)*x +y;	
		cout<<res<<endl;
	}
	return 0;
}
/*
Maths
given k%x = y
it means k = m*x +y
also given k<=n
therefore 
 m*x+y<=n
=> m <=(n-y)/x
therefore,  k = [(n-y)/x] * x +y
*/