#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	int a,b;
	if(num%2==0)
	{
		cout<<'4'<<" "<<num-4;
	}
	else
	{
		cout<<'9'<<" "<<num-9;
	}
	return 0;
}