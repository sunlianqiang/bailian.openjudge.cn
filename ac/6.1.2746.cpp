#include <iostream>

using namespace std;

int main()
{
	int n,m;
	int i,j;
	while(1)
	{
		cin>>n>>m;
		if ( n==0 && m==0 )
			break;

		bool *pn = new bool[n+1];
		for (i=0; i<=n; i++)
		{
			pn[i] = true;
		}
		
		int ncount = n;
		i=j=0;
		while(ncount>1)
		{
			if ( pn[i%n]==true )
			{
				
				if (j==m-1 )
				{
					pn[i%n] = false;
					--ncount;
					j=0;
				}
				else
					++j;
			}
			++i;
		}

		for (i=0; i<n; i++)
		{
			if ( pn[i] == true)
				cout<< i+1 <<endl;
		}
		
	}

	return 0;
}
