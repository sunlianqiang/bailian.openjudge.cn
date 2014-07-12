#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

int to10(string num2)
{
	unsigned int num10 = 0;
	for (int i=0; i<num2.length(); i++)
	{
		num10 *=2;
		num10 += num2.at(i)-'0';
	}
	return num10;
}
void to16(unsigned int a)
{
	string cvec;
	short b;

	while(a)
	{
		b = a%16;
		a = a/16;
		if (b>9)
			cvec.insert( cvec.begin(), 1, (char)('A'+b-10) );
		else
			cvec.insert( cvec.begin(), 1, (char)('0'+b) );
	}
	
	cout<<cvec<<endl;
	
}
void output16(string substr)
{
	unsigned int num10 = 0;
	for (int i=0; i<substr.length(); i++)
	{
		num10 *=2;
		num10 += substr.at(i)-'0';
	}

	if ( num10>9 )
		cout << (char)('A'+num10-10);
	else 
		cout << (char)('0'+num10);
}
void change2_16(string num2)
{
	int len = num2.length();
	unsigned pos = 0;
	string substr;
	if ( len%4 != 0)
	{
		substr = num2.substr(0, len%4);
		output16(substr);
		pos += len%4;
		len -= len%4;
		
	}
	while(len>0)
	{
		
			
			substr =num2.substr(pos, 4);
			output16(substr);
			len -=4;
			pos +=4;
	}
	
	cout<<endl;
}
int main()
{
	unsigned int num10 = 0;
	string num2;
	int N;
	cin>>N;
	for (int i=0; i<N; i++)
	{
		cin>>num2;
		change2_16(num2);
		/*num10 = to10(num2);
		to16(num10);*/
	}
	
	return 0;
}
