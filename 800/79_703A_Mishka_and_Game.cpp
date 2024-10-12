#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int m_count=0, c_count = 0;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(a>b)
			m_count++;
		if(a<b)
			c_count++;
	}
	if(m_count>c_count)
		cout<<"Mishka";
	else if(c_count>m_count)
		cout<<"Chris";
	else
		cout<<"Friendship is magic!^^";
	return 0;
}