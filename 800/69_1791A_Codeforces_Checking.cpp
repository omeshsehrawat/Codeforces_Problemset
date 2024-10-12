#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		char a;
		cin>>a;
		string str = "codeforces";
		int c=0;
		for(int i=0;str[i]!='\0';i++)
		{
			if(str[i]==a)
			{
				cout<<"YES"<<endl;
				c++;
				break;
			}
		}
		if(c==0)
		{
			cout<<"NO"<<endl;
		}

	}
	return 0;
}