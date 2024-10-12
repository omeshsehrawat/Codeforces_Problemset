#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	string str1,str2;
	cin>>str1;
	cin>>str2;
	int c=0;
	for(int i=0;str1[i]!=0;i++)
	{
		str1[i]=toupper(str1[i]);
		str2[i]=toupper(str2[i]);
		if(str1[i]>str2[i])
		{
			cout<<1;
			c++;
			break;
		}
		else if(str1[i]<str2[i])
		{
			cout<<-1;
			c++;
			break;
		}
	}
	if(c==0)
		cout<<c;
	return 0;
}