#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int c=0;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(a==1)
		{
			c++;
			break;
		}
	}
	if(c!=0)
	{
		cout<<"HARD";
	}
	else
	{
		cout<<"EASY";
	}
	return 0;
}