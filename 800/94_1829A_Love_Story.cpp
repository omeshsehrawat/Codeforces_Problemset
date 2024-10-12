#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1 = "codeforces";
		string str2;
		cin>>str2;
		int c=0;
		for(int i=0; i<10; i++)
		{
			if(str1[i]!=str2[i])
				c++;
		}
		cout<<c<<endl;
	}
	return 0;
}