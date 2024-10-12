#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[5][5];
	int row,col;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]==1)
			{
				row = i+1;
				col = j+1;
			}
		}
	}
	int steps=abs(row-3)+abs(col-3);
	cout<<steps;
	return 0;
}