#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	float total = 0;
	float avg = 0;
	int stu = 0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>stu;
		total += stu;
	}
	avg = total/n;

	cout<<fixed << setprecision(2)<< avg <<endl;

	return 0;
}