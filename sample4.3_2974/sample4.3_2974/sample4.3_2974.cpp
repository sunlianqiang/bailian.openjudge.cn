#include <iostream>
#include <cstring>

using namespace std;

void input(char telbook[][9],int index)
{
	char innum[20];
	cin>>innum;
	int j=0;
	for (size_t i=0; i<strlen(innum); i++)
	{	
		if ( j==3 )
		{
			telbook[index][j++] = '-';
		}

		if (innum[i]=='0' || innum[i]=='1' )
		{
			telbook[index][j++] = innum[i];
		} 
		else if ( innum[i]=='2' || innum[i]=='A' || innum[i]=='B' || innum[i]=='C' )
		{
			telbook[index][j++] = '2';
		}
		else if ( innum[i]=='3' || innum[i]=='D' || innum[i]=='E' || innum[i]=='F' )
		{
			telbook[index][j++] = '3';
		}
		else if ( innum[i]=='4' || innum[i]=='G' || innum[i]=='H' || innum[i]=='I' )
		{
			telbook[index][j++] = '4';
		}
		else if ( innum[i]=='5' || innum[i]=='J' || innum[i]=='K' || innum[i]=='L' )
		{
			telbook[index][j++] = '5';
		}
		else if ( innum[i]=='6' || innum[i]=='M' || innum[i]=='N' || innum[i]=='O' )
		{
			telbook[index][j++] = '6';
		}
		else if ( innum[i]=='7' || innum[i]=='P' || innum[i]=='R' || innum[i]=='S' )
		{
			telbook[index][j++] = '7';
		}
		else if ( innum[i]=='8' || innum[i]=='T' || innum[i]=='U' || innum[i]=='V' )
		{
			telbook[index][j++] = '8';
		}
		else if ( innum[i]=='9' || innum[i]=='W' || innum[i]=='X' || innum[i]=='Y' )
		{
			telbook[index][j++] = '9';
		}
	}
}

int compare(const void *elem1,const void *elem2) { 
//为函数模板sort定义数组元素的比较函数
	return (strcmp((char*)elem1, (char*)elem2)); 
}; 

int main()
{
	int n;
	cin>>n;

	int i,j;
	bool noduplicate; 
	char telNumbers[100000][9];
	memset(telNumbers, 0, 100000*9);

	for (int i=0; i<n; i++)
	{
		input( telNumbers, i);
	}

	qsort(telNumbers,n,9,compare);//对输入的电话号码进行排序

	noduplicate = true; 
	i=0; 
	while(i<n){//搜索重复的电话号码，并进行输出
		j=i; 
		i++; 
		while(i<n&&strcmp(telNumbers[i], telNumbers[j])==0) i++; 
		if(i-j>1) { 
			printf("%s %d\n", telNumbers[j], i-j); 
			noduplicate = false; 
			} 
		} 
	if ( noduplicate ) 
		printf("No duplicates.\n"); 


	//for (int i=0; i<n; i++)
	//{
	//	cout << telNumbers[i] <<endl;
	//}

	return 0;
}