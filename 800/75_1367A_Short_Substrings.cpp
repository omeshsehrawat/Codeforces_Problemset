#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string str,t;
		cin>>str;
		int l = str.length();
		t +=str[0];
		int i=1;
		while(i<l-1)
		{
			if(str[i] == str[i+1])
			{
				t += str[i];
				i = i+2;
			}
			else
			{
				t +=str[i];
				i++;
			}
		}
		t += str[l-1];
		cout<<t<<endl;
		
	}
	return 0;
}