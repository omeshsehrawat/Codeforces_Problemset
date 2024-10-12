#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	for(int i=0;i<k;i++)
	{
		if(n>0)
		{
			int r=n%10;
			if(r!=0)
			{
				n=n-1;
			}
			else
			{
				n=n/10;
			}
		}
		else
		{
			break;
		}
		
	}
	cout<<n;
	return 0;
}