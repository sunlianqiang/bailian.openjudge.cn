#include <iostream>
#include <string>

using namespace std;

void output(char ch)
{
	if ( ch>='A' && ch<='Z' )
	{
		cout<< (char)( (ch-'A'+26-5)%26 + 'A' );
	} 
	else
	{
		cout<<ch;
	}
}

void decode(string str)
{
	for (int i=0; i<str.length(); i++)
	{
		output(str[i]);
	}
	cout<<endl;
}

int main ()
{
	string pInput;
		while (1)
		{
			getline(cin, pInput);
			if ( pInput=="START")
			{
				getline(cin, pInput);
				decode(pInput);
				getline(cin,pInput);
			}
			else if ( pInput=="ENDOFINPUT")
				break;
	
			
		}

	return 0;
}

