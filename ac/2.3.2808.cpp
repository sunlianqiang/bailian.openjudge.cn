#include <iostream>

using namespace std;

int main()
{
	int M,L;
	int treeNum =0;
	cin>>L>>M;
	int *tree = new int[L];

	for (int i=0; i<=L; i++)
	{
		tree[i] = 1;
	}
	for (int i=0;i <M; i++)
	{
		int m1,m2;
		cin>>m1>>m2;

		for (int j=m1; j<=m2; j++)
		{
			tree[j] = 0;
		}
	}

	
	for (int i =0; i<=L; i++)
	{
		treeNum += tree[i];
	}

	cout << treeNum <<endl;
	return 0;
}