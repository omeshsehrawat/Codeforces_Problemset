#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n;
	cin>>n;
	int c=0;
	while(n)
	{
		int r=n%10;
		if(r==4 or r==7)
		{
			c++;
			
		}
		n=n/10;
	}
	if(c==4 || c==7)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}