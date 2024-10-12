#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int sum1=0, sum2=0;
		for(int i=0;i<3;i++)
		{
			sum1 += int(str[i]);
		}
		for(int i=3;i<6;i++)
		{
			sum2 += int(str[i]);
		}
		if(sum1 == sum2)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}