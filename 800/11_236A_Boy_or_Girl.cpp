#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	int str_len=str.length();
	char *arr=new char[str_len];
	arr[0]=str[0];
	int j=1,c=0;
	for(int i=0;str[i]!=0;i++)
	{
		c=0;
		for(int k=0;k<j;k++)
		{
			if(str[i]==arr[k])
			{
				c++;
			}
		}
		if(c==0)
		{
			arr[j]=str[i];
			j++;
		}

	}
	if(j%2==0)
	{
		cout<<"CHAT WITH HER!";
	}
	else
	{
		cout<<"IGNORE HIM!";
	}

	return 0;
}