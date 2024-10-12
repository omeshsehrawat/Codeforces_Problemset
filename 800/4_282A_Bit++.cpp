#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int x=0;
	while(t--)
	{
		string ch;
		cin>>ch;
		if((ch=="X++")|| (ch=="++X"))
		{
			x++;
		}
		else if ((ch=="X--")||(ch=="--X"))
		{
			x--;
		}
	}
	cout<<x;
	return 0;
}