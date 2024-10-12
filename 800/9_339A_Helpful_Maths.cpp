#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	char arr[100];
	cin>>arr;
	for(int i=0;arr[i]!='\0';i++)
	{
		if(arr[i]!='+')
		{
			for(int j=i;arr[j]!='\0';j++)
			{
				if(arr[j]!='+')
				{
					if(arr[i]>arr[j])
					{
						char temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}
		}	
	}
	cout<<arr;
	return 0;
}