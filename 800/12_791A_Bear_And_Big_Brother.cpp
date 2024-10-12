#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	int i=0;
	while(i>=0)
	{
		if(a>b)
			break;
		else
		{
			a=a*3;
			b=b*2;
		}
		i++;
	}
	cout<<i;
	return 0;
}