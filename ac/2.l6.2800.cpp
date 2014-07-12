#include <iostream>
#include <string>
using namespace std;

int main()
{
	short *pNum = new short[26];
	int maxNum=0;
	for (int i=0; i<26; i++)
	{
		pNum[i]=0;
	}
	string line;
	for (int i=0; i<4; i++)
	{
		getline(cin, line);
		//cout << line <<endl;

		for (int j=0; j<line.length(); j++)
		{
			++pNum[ line[j]-'A' ];
		}
	}

	for (int i=0; i<26; i++)
	{
		if ( pNum[i]>maxNum )
		{
			maxNum = pNum[i];
		}
		//cout<< pNum[i] << " ";
	}

	for (int i=maxNum; i>0; --i)
	{
		for ( int j=0; j<26; j++)
		{
			if ( pNum[j]==i )
			{ 
				cout << "* ";
				--pNum[j];
			}
			else
				cout << "  ";
		}
		cout<<endl;
	}

	for ( int j=0; j<26; j++)
	{
		cout << (char)('A'+j) << " ";
	}


	return 0;
}
