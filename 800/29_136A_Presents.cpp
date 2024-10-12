#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int arr[t], a[t];
	for(int i=0;i<t;i++)
	{
		cin>>arr[i];
		int p = arr[i];
		a[p-1] = i+1;
	}
	for(int i=0;i<t;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}