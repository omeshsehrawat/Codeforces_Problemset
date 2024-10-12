#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	int c=0,j;
	if(num==1)
		cout<<1;
	else
	{
		for(int i=1; num>0; i++)
		{
			int sum = 0;
			for(j=1; j<i; j++)
			{
				sum +=j;
			}
			num -=sum;
			if(num<sum+j)
				break;
			c++;
		}
		cout<<c;
	}
	
	return 0;
}