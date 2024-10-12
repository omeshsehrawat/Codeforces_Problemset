#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string str, str2="yes";
		cin>>str;
		int c=0;
		for(int i=0;str[i]!='\0';i++)
		{
			str[i] = tolower(str[i]);
			if(str[i] != str2[i])
			{
				c++;
			}
		}
		if(c!=0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}