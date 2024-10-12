#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int sum=0;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if((b-a)>=2)
			sum++;
	}
	cout<<sum;
	return 0;
}