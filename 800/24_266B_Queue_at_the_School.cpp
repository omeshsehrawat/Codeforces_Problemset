#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	char str[a];
	cin>>str;
	int c=0,j=0;
	for(int i=0;i<b;i++)
	{
		j=0;
		while(j<a)
		{
			if(str[j]=='B' && str[j+1]=='G')
			{
				char ch=str[j];
				str[j]=str[j+1];
				str[j+1]=ch;
				j=j+2;
			}
			else
				j++;
		}
	}
	cout<<str;

	return 0;
}