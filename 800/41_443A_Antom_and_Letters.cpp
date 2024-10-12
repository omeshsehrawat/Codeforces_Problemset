#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	getline(cin,s);
	set <char> a;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='a' && s[i]<='z')
			a.insert(s[i]);
	}
	cout<<a.size();
	return 0;
}