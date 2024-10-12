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
		int l = str.length();
		if(l%2)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			int h = l/2,c=0;
			for(int i=0;i<h;i++)
			{
				if(str[i]!=str[i+h])
				{
					c++;
					break;
				}
			}
			if(c==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		
	}
	return 0;
}