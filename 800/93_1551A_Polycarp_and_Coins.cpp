#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,l=0;
		cin>>n;
		int num = n/3;
		int res = num*2;
		int dif = n-res;
		int r = dif-num;
		if(r>=2)
		{
			dif = num;
			l = r/2;
			int p=r%2;
			dif +=p;
		}
		cout<<dif<<" "<<num+l<<endl;
	}
	return 0;
}