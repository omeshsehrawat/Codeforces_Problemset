#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int year;
	cin>>year;
	while(1)
	{
		year+=1;
		int a=year/1000;
		int b=year/100 %10;
		int c=year/10 %10;
		int d=year%10;
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
		{
			cout<<year;
			break;
		}
	}
	return 0;
}