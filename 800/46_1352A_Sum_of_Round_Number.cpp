#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int arr[6];
		cin>>n;
		int i= 1;
		int c = 0;
		while(n)
		{
			int r=n%10;
			if(r!=0){
				arr[c] = r*i;
				c ++ ;
			}
			i = i*10;
			n = n/10;

		}
		cout<<c<<endl;
		for(int i =0 ; i<c;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}