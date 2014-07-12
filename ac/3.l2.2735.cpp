#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
	unsigned int num10 = 0;
	string num8;
	cin>>num8;

	for (int i=0; i<num8.length(); i++)
	{
		num10 *=8;
		num10 += num8.at(i)-'0';
	}
	cout<< num10<<endl;
	return 0;
}