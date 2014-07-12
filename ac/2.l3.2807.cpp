#include <iostream>

using namespace std;

int main()
{
	int *pn = new int[16];
	int nNum;
	int nTwiceCount = 0;
	int i;
	while(1)
	{
		//init
		nTwiceCount = 0;

		cin>>pn[0];
		if( pn[0] == -1)
			break;

		for(i=1; i<16; i++)
		{
			cin>>pn[i];
			if( pn[i] == 0)
				break;
		}
		nNum = i;

		for(i=0; i<nNum; i++)
		{
			for(int j=0; j<nNum; j++)
				if( pn[i] == pn[j]*2 )
					++nTwiceCount;
		}
		cout<< nTwiceCount <<endl;
	}

	
	return 0;
}