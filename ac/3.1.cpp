#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int tob10(int num, int base)
{
	int ret =0;
	int basei =1;
	while(num>0)
	{
		ret += (num%10)*basei;
		basei *=base;
		num /=10;
	}

	return ret;
}
int main()
{
	int nCase;
	int p, q, r;
	int i,j;
	cin>>nCase;
	for (i=0; i<nCase; i++)
	{
		cin>>p>>q>>r;
		j=2;
		int p1=p,q1=q,r1 = r;
		while(p1>0)
		{
			j = max(j,p1%10+1);
			p1 /= 10;
		}
		while(q1>0)
		{
			j = max(j,q1%10+1);
			q1 /= 10;
		}
		while(r1>0)
		{
			j = max(j,r1%10+1);
			r1 /= 10;
		}
		
		for (; j<=16; ++j)
		{
			if ( ( tob10(p,j) * tob10(q,j) ) == tob10(r,j))
			{
				cout<<j<<endl;
				break;
			}
			
		}
		if ( j>16 )
			cout << "0"<<endl;
	}

	return 0;
}