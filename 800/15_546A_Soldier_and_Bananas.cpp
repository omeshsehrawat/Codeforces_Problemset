#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int k,n,w;
	cin>>k>>n>>w;
	int sum=0;
	for(int i=1;i<=w;i++)
	{
		sum= sum+i*k;
	}
	if(sum>n)
		cout<<sum-n;
	else
		cout<<0;
	return 0;
}