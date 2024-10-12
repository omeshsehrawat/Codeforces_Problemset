#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,h;
	cin>>n>>h;
	int sum=0;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>h)
			sum+=2;
		else
			sum+=1;
	}
	cout<<sum;
	return 0;
}