#include <bits/stdc++.h>
using namespace std;

/*int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p=0;
		cin>>n;
		int l=n-1;
		string str;
		cin>>str;
		int arr[26]={0};
		for(int i=0; i<l;i++)
		{
			
			if(str[i]!=str[i+1])
			{
				arr[str[i]-65]++;
			}
		}
		if(str[l]!=str[l-1])
		{
			arr[str[l]-65]++;
		}
		for(int i=0;i<26;i++)
		{
			if(arr[i]>1)
			{
				p++;
				break;
			}
		}
		if(p==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}*/

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0;
		cin>>n;
		string str;
		cin>>str;
		for(int i=0;i<n;i++)
		{
			if(str[i]!=str[i+1])
			{
				for(int j=i+1;j<n;j++)
				{
					if(str[i]==str[j])
					{
						c++;
						break;
					}
				}
			}
		}
		if(c==0)
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