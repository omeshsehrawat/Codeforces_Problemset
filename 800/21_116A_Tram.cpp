#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int sum=0,big=0;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		sum=sum-a+b;
		if(big<sum)
		{
			big=sum;
		}
	}
	cout<<big;
	return 0;
}