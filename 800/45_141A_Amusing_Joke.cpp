#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	string s4=s1+s2;
	sort(s4.begin(),s4.end());
	sort(s3.begin(),s3.end());
	int s3_size = s3.size();
	int s4_size = s4.size();
	int c=0;
	for(int i=0;s3[i]!=0;i++)
	{
		if(s3[i]!=s4[i])
			c++;
	}
	if(c==0 && s3_size==s4_size)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}