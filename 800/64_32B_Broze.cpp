#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='.')
		{
			cout<<0;
			i++;
		}
		else if(str[i] == '-')
		{
			if(str[i+1]=='.')
			{
				cout<<1;
				i = i+2;
			}
			else
			{
				cout<<2;
				i=i+2;
			}
		}
	}
	return 0;
}