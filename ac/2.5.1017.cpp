//ac

#include <iostream>

using namespace std;

int main()
{
	int pak[7], pakNum, pak1need, pak1have, pak2need, pak2have;
	int pak3have2[4] = {0,5,3,1};

	while(1)
	{
		for(int i=1; i<=6; i++)
			cin>>pak[i];
		if( pak[1]==0 && pak[2]==0 && pak[3]==0 && pak[4]==0 && pak[5]==0 && pak[6]==0 )
			break;

		pakNum = 0;
		pakNum = pak[6] + pak[5] + pak[4] + (pak[3]+3)/4;

		pak2have = pak[4]*5 + pak3have2[ pak[3]%4 ];
		if( pak2have < pak[2] )
		{
			pak2need = pak[2] - pak2have;
			pakNum += (pak2need +8)/9;
		}

		pak1have = pakNum*36 - pak[6]*36 - pak[5]*25 - pak[4]*16 - pak[3]*9 - pak[2]*4;
		if ( pak1have < pak[1] )
		{
			pak1need = pak[1] - pak1have;
			pakNum += (pak1need + 35)/36;
		}

		cout<< pakNum <<endl;
	}
	return 0;
}

