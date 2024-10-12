#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a=0,b=0,c=0,d=0,e=0;
	int r1=n%100;
	a = n/100;
	int r2=r1%20;
	b = r1/20;
	int r3=r2%10;
	c = r2/10;
	int r4=r3%5;
	d = r3/5;
	e = r4;
	cout<<a+b+c+d+e;
	return 0;
}