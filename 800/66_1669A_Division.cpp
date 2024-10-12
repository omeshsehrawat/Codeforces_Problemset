#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		cin>>a;
		if(a<=1399)
		{
			cout<<"Division 4"<<endl;
		}
		else if(1400<=a && a<=1599)
		{
			cout<<"Division 3"<<endl;
		}
		else if(1600<=a and a<=1899)
		{
			cout<<"Division 2"<<endl;
		}
		else 
		{
			cout<<"Division 1"<<endl;
		}
	}
	return 0;
}