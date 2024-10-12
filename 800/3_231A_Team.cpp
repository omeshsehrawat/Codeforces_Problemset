#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int p=t;
	int score[p];
	int j=0;
	while(t--)
	{
		
		int c=0;
		int arr[3];
		for(int i=0;i<3;i++)
		{
			cin>>arr[i];
			if(arr[i]==1)
				c++;
		}
		score[j]=c;
		j++;
	}
	int result= 0;
	for(int i=0;i<p;i++)
	{
		if(score[i]>=2)
			result++;
	}
	cout<<result;
	return 0;
}