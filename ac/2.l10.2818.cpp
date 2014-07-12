#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

string Output(int *pn, int n, string line, int k)
{
	string tmp(n, ' ');
	if ( k>0 )
	{
		for (int i=0; i<line.length(); i++)
		{
			int j= pn[i];
			tmp[ j-1 ] = line[i];
		}
		return Output(pn, n, tmp, k-1);
	}
	else{
		cout<<line<<endl;
		return line;
	}
}
void Output2(int *pn, int n, string line, int k)
{
	int *seq = new int[line.length()];
	for (int i=0; i<line.length(); i++)
	{
		seq[i] = i;
	}

	for (int i=0; i<k; i++)
	{
		for (int j=0; j<line.length(); j++)
		{
			seq[j] = pn[ seq[j] ] -1;
		}
	}

	string tmp(n, ' ');
	for (int i=0; i<line.length(); i++)
	{
		tmp[ seq[i] ] = line[i];
	}

	delete []seq;
	cout<< tmp <<endl;
}
void Output3(int *pn, int n, string line, int k, int *pmod)
{
	int *seq = new int[line.length()];
	for (int i=0; i<line.length(); i++)
	{
		seq[i] = i;
	}

	for (int i=0; i<line.length(); i++)
	{
		//2,3,...
		if ( pmod[i]>1 )
		{
			for (int j=0; j< (k%pmod[i]); j++)
			{
				seq[i] = pn[ seq[i] ] -1;
			}
		}
		//0
		/*else{
			seq[i] = pn[ seq[i] ] -1;
		}*/
		
	}

	string tmp(n, ' ');
	for (int i=0; i<line.length(); i++)
	{
		tmp[ seq[i] ] = line[i];
	}

	delete []seq;
	cout<< tmp <<endl;
}
void computeMod(int *pmod, int *pn, int n)
{
	for (int i=0; i<n; i++)
	{
		if ( pn[i] == (i+1) )
		{
			pmod[i] = 0;
		} 
		else
		{
			int j=1;
			pmod[i] = pn[ pn[i] - 1];
			while( pmod[i] != pn[i] )
			{
				pmod[i] = pn[ pmod[i] - 1 ];
				++j;
			}
			pmod[i] = j;
		}
	}
}
int main()
{
	int n, k; 
	string line;

	while(1)
	{
		cin>>n;
		if (n==0)
			break;
		int *pn = new int[n+1];
		int *pmod = new int[n];
		//pn[0] = -1;
		for (int i=0; i<n; i++)
		{
			cin>>pn[i];
		}
		computeMod(pmod,pn,n);
		/*for (int i=0; i<n; i++)
		{
			cout<<pn[i];
		}
		cout<<endl;
		for (int i=0; i<n; i++)
		{
			cout<<pmod[i];
		}*/
		while(cin>>k)
		{
			if ( k==0 )
				break;

			getchar();
			getline(cin, line);
			Output3(pn, n, line, k, pmod);
		}
		//每一个块后有一个空行。
		cout<<endl;
		delete []pn;
	}

	return 0;
}
