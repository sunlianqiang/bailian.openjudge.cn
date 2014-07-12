#include <iostream>
#include <string>
using namespace std;

int main()
{
	int row,col,P;
	cin>>row>>col>>P;
	int *pCh = new int[26];
	for ( int i=0; i<26; i++)
	{
		pCh[i]=0;
	}

	char ch;
	for(int i=0; i<row*col; i++)
	{
		cin>>ch;
		pCh[ ch-'A' ]++;
	}
	string line;
	for(int i=0; i<P; i++)
	{
		cin>>line;
		for(int j=0; j<line.length(); j++)
		{
			pCh[ line[j]-'A' ]--;
		}
	}
	for(int i=0; i<26; i++)
	{
		while(pCh[i])
		{
			cout<< (char)( i+'A' );
			--pCh[i];
		}
	}

	return 0;
}


