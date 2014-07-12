#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person(){ unnormal = 0; }
	~Person() {};

	void input()
	{
		cin>>gender>>wbc>>rbc>>hgb>>hct>>plt;
	}
	void output()
	{
		if( wbc<4.0 || wbc>10.0)
			++unnormal;
		if ( rbc<3.5 || rbc>5.5 )
			++unnormal;
		if ( plt<100 || plt>300 )
			++unnormal;

		if ( gender=="male")
		{
			if ( hgb<120 || hgb>160 )
				++unnormal;
			if ( hct<42 || hct>48 )
				++unnormal;
		} 
		else
		{
			if ( hgb<110 || hgb>150 )
				++unnormal;
			if ( hct<36 || hct>40 )
				++unnormal;
		}

		if ( unnormal )
			cout<<unnormal<<endl;
		else
			cout<< "normal"<<endl;
	}
protected:
private:
	string gender;
	float wbc;
	float rbc;
	int hgb;
	int hct;
	int plt;
	short unnormal;
};
int main()
{
	int k;
	cin>>k;
	Person *pPerson = new Person[k];
	for (int i=0; i<k; i++)
	{
		pPerson[i].input();
		pPerson[i].output();
	}

	return 0;
}
