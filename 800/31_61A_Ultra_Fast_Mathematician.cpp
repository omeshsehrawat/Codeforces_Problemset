#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string str1,str2;
	cin>>str1;
	cin>>str2;
	for(int i=0;str1[i]!='\0';i++)
	{
		if(str1[i] == str2[i])
			cout<<0;
		else
			cout<<1;
	}
	return 0;
}