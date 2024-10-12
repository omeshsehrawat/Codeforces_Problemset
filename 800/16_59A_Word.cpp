#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	int upper_char=0, lower_char=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(islower(str[i]))
			lower_char++;
		else
			upper_char++;
	}
	if(upper_char>lower_char)
	{
		for(int i=0;str[i]!='\0';i++)
		{
			char ch=toupper(str[i]);
			cout<<ch;
		}
	}
	else if(upper_char<=lower_char)
	{
		for(int i=0;str[i]!='\0';i++)
		{
			char ch=tolower(str[i]);
			cout<<ch;
		}
	}
	return 0;
}