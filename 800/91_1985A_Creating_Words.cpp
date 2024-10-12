#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		char str1[3], str2[3];
		for(int i=0; i<3; i++)
		{
			cin>>str1[i];
		}
		for(int i=0; i<3; i++)
		{
			cin>>str2[i];
		}
		char a = str1[0];
		str1[0]=str2[0];
		str2[0]=a;
		for(int i=0; i<3; i++)
		{
			cout<<str1[i];
		}
		cout<<" ";
		for(int i=0; i<3; i++)
		{
			cout<<str2[i];
		}
		cout<<endl;
	}
	return 0;
}