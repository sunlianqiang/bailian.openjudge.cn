#include <iostream>

using namespace std;

int main()
{
	int N;
	int perimeter=0, area=0;
	cin>>N;
	int data;
	bool *pn = new bool[N*N];
	for (int i=0; i<N*N; i++)
	{
		cin>>data;
		if ( data <= 50 )
		{
			++area;
			pn[i] =false;
		}
		else
			pn[i] = true;
		
		
	}

	//perimeter
	//cout<<endl;
	for (int i=0; i<N; i++)
	{
		for (int j=0; j<N; j++)
		{
			
			if ( pn[i*N+j] == false )
			{
				if ( i==0 || i==(N-1) || j==0 || j==(N-1) 
					|| pn[ (i-1)*N+j ]==true || pn[ (i+1)*N+j ]==true || pn[ i*N+j-1 ]==true || pn[ i*N+j+1 ]==true )
				{
					++perimeter;
				}
			}
			//cout<<pn[i*N+j] <<" ";
		}
		//cout<<endl;
	}

	cout<< area << " " <<perimeter <<endl;


	delete []pn;
	return 0;
}
