//ac 2742
#include <iostream>
#include <cstring>
using namespace std;

int maxIndex(int num[], int len)
{
	int maxi =0;

	for(int i=1; i< len; i++)
		if( num[maxi] < num[i] )
			maxi = i;

	return maxi;
}
int main()
{
	int n;
	char input[1001];
	int letternum[26]={0};
	int maxi;


	cin>>n;
	
	while(n-->0)
	{
		for(int i=0; i<26; i++)
			letternum[i] = 0;

		cin>>input;

		for(int i=0; i<strlen(input); i++)
		{
			letternum[ input[i] - 'a' ]++; 
		}

		maxi = maxIndex(letternum, 26);

		cout<< (char)(maxi+'a') << " " << letternum[maxi] <<endl;
	}

}



//WA, why??

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int maxIndex(int num[], int len)
//{
//	int maxi =0;
//	
//	for(int i=1; i< len; i++)
//		if( num[maxi] < num[i] )
//			maxi = i;
//
//	return maxi;
//}
//int main()
//{
//	int n;
//	string input;
//	int letternum[26]={0};
//	int maxi;
//
//
//	cin>>n;
//	// n 后面的回车没有从 输入队列中清除
//	getline(cin,input);
//	while(n-->0)
//	{
//		for(int i=0; i<26; i++)
//			letternum[i] = 0;
//				
//		getline(cin,input);
//		for(int i=0; i<input.length(); i++)
//		{
//			letternum[ input[i] - 'a' ]++; 
//		}
//
//		maxi = maxIndex(letternum, 26);
//
//		cout<< (char)(maxi+'a') << " " << letternum[maxi] <<endl;
//	}
//
//}
//
