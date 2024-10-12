#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	string s,t;
	cin>>s;
	cin>>t;
	int s_len=s.length();
	int t_len=t.length();
	int i=0,j=t_len,c=0;
	while(i<s_len && j>0)
	{
		if(s[i]!=t[j-1])
			{
				
				c++;
				break;
			}
			j--;
		i++;
	}
	if(c!=0 || t_len!=s_len)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES";
	}
	return 0;
}