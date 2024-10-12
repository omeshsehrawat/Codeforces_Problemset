#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	int num;
	if(a>b)
		num = a;
	else
		num = b;
	int r = (6-num)+1;
	int d = 6;
	for(int i=1; i<=6; i++)
	{
		if(r%i==0 && d%i==0)
		{
			r = r/i;
			d = d/i;
		}
	}
	cout<<r<<"/"<<d;
	return 0;
}