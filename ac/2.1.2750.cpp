#include <iostream>

using namespace std;

int main()
{
	int N;
	cin>>N;
	int *input = new int[N];
	
	for(int i=0; i< N; i++)
	{
		cin>>input[i];
	}

	for(int i =0; i< N; i++)
	{
		int a, max, min;
		a = input[i];
		if( a%2 != 0)
		{
			cout << "0 0" << endl;
		}
		else
		{			
			max = a/2;
			min = a/4 + (a%4)/2;
			cout << min << " " << max << endl;
		}
	}
	

	return 0;
}