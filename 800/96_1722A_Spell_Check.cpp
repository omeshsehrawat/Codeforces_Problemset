#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1 = "Timur";
		int n;
		cin>>n;
		char str2[n];
		for(int i=0;i<n;i++)
		{
			cin>>str2[i];
		}
		if(n!=5)
			cout<<"NO"<<endl;

		else
		{
			int c=0;
			for(int i=0;i<5;i++)
			{
				for(int j=0; j<n; j++)
				{
					if(str1[i]==str2[j])
					{
						c++;
						break;
					}
				}
			}
			if(c==5)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}