#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	char str[t];
	cin>>str;
	int c=0;
	for(int i=0;i<t-1;i++)
	{
		if(str[i]==str[i+1])
		{
			c++;
		}
	}
	cout<<c;
	return 0;
}