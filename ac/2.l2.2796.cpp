#include <iostream>

using namespace std;

int main()
{
	int a, b,ret = 0;
	cin>>a;
	for(int i=0; i<5; i++)
	{
		cin>>b;
		if ( b<a)
			ret +=b;
	}
	cout<< ret <<endl;
	return 0;
}