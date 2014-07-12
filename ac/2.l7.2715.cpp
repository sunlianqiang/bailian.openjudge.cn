#include <iostream>
#include <string>
using namespace std;

class Stu{
	string name;
	short avgScore;
	short pingyiScore;
	char isGanbu;
	char isFromWest;
	short paperNum;

	int prize;

public:
	int getPrize()
	{
		return prize;
	}
	void input()
	{
		cin>>name>>avgScore>>pingyiScore>>isGanbu>>isFromWest>>paperNum;
	}
	int prizeCompute()
	{
		//1
		if( avgScore>80 && paperNum >= 1 )
			prize=8000;
		else
			prize=0;
		//2
		if( avgScore>85 && pingyiScore>80 )
			prize+=4000;
		//3
		if ( avgScore>90 )
			prize+=2000;
		//4
		if ( avgScore>85 && isFromWest=='Y' )
			prize+=1000;
		//5
		if ( pingyiScore>80 && isGanbu=='Y' )
			prize+=850;

		return prize;
	}
	void output()
	{
		cout<<name<<endl;
		cout<<prize<<endl;

	}
};


int main()
{
	int N;
	cin>>N;
	int totalPrize = 0;
	Stu *pStu = new Stu[N];
	Stu *pStuBest = pStu;
	for(int i=0; i<N; i++)
	{
		pStu[i].input();
		if ( pStu[i].prizeCompute() > pStuBest->getPrize() )
		{
			pStuBest = &pStu[i];
			
		}
		

		totalPrize += pStu[i].getPrize();
	}

	pStuBest->output();
	cout<< totalPrize <<endl;
	return 0;
}