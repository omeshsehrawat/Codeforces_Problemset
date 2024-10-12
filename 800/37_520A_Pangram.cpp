#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	char str[n];
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
	}
	int c=0;
	string arr="abcdefghijklmnopqrstuvwxyz";
	for(int i=0;i<26;i++)
	{
		int p=0;
		for(int j=0;j<n;j++)
		{
			char a = tolower(str[j]);
			if(arr[i]==a)
			{
				p++;
			}
		}
		if(p!=0)
		{
			c++;
		}
	}
	if(c==26)
	{
		cout<<"YES";
	}
	else
		cout<<"NO";
	return 0;
}