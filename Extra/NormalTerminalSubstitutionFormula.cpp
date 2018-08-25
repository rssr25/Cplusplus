#include<iostream>
#include<string>
#include<string.h>
using namespace std;

void normalSubstitution(string a)
{
	string original = a;
	string final = "00001111";
	int count = 0;

	while(original != final)
	{
		string previous;

		for(int i = 0; i < 7; i++)
		{
			previous = original;
			if(original[i] == '1' && original[i+1] == '0')
			{
				original[i] = '0';
				original[i+1] = '1';
				count++;
			}

			if(previous.compare(original) == 0)
				continue; 
			else
				cout << original << endl;
		}
	}

	cout << "Total substitions required for binary string " << a << " in Normal Substitution: " << count << "\n" << endl;
}

void terminalSubstitution(string a)
{

	string original = a;

	for(int i = 0; i < 7; i++)
	{
		if(original[i] == '1' && original[i+1] == '0')
		{
			original[i] = '0';
			original[i + 1] = '1';
			break;
		}

		else
			continue;
	}

	cout << "Terminal substitution: " << original << endl;
}

int main(void)
{

	string a = "10101010";
	normalSubstitution(a);
	terminalSubstitution(a);

}