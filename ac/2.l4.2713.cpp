#include <iostream>

using namespace std;

int main()
{
	int a, w, h, wmin, hmin, wmax, hmax;
	cin>>a;
	wmin=hmin=a;
	wmax=hmax=0;
	int i,j;
	int data;
	for( i=0; i<a; i++)
	{
		for (j=0; j<a; j++)
		{
			cin>>data;
			if (data ==0)
			{
				if ( i<wmin )
					wmin=i;
				if ( j<hmin	)
					hmin=j;
				if ( i>wmax )
					wmax=i;
				if ( j>hmax )
					hmax=j;
			}
		}
	}

	w=wmax-wmin-1;
	h=hmax-hmin-1;
	cout<< w*h <<endl;

	return 0;
}
