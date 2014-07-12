#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	int nCase;
	cin>>nCase;
	for (int i =0; i< nCase; i++)
	{
		char w1, w2;
		int h1, h2,w, h;
		cin>>w1>>h1>>w2>>h2;
		//cout<<w1<<h1<<w2<<h2;

		w= abs(w1-w2);
		h= abs(h1-h2);

		int king, queen, car, elephent;
		if( w==0 && h==0 )
		{
			cout<< "0 0 0 0" <<endl;
		}
		else
		{
			king = max(w,h);
			if (w==h || w ==0 || h==0)
			{
				queen =1;
			}
			else
				queen = 2;

			if ( w == 0 || h == 0)
			{
				car = 1;
			} 
			else
			{
				car =2;
			}

			if ( w == h )
			{
				elephent = 1;
			}
			else if ( abs(w-h)%2 != 0 )
			{
				elephent = -1;
				cout <<king << " "<<queen<< " "<<car<<" "<<"Inf"<<endl;
				continue;
				//break;
			} 
			else
			{
				elephent = 2;
			}
					
			cout <<king << " "<<queen<< " "<<car<<" "<<elephent<<endl;
		}
	}
	return 0;
}