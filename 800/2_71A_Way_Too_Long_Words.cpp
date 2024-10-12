#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string word;
		cin>>word;
		int c=0;
		for(int i=0;word[i]!='\0';i++)
		{
			c++;
		}
		if(c>10)
			cout<<word[0]<<c-2<<word[c-1]<<endl;
		else
			cout<<word<<endl;
	}
	return 0;
}