#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum =0, a;
		cin>>a;
		while(a)
		{
			int r = a%10;
			sum +=r;
			a /=10;
		}
		cout<<sum<<endl;
	}
	return 0;
}