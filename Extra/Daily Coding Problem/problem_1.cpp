/*

This problem was recently asked by Google.

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?



*/

#include<iostream>
//#include<string>
using namespace std;
 
bool addUp(int* s, int k)
{
	bool answer = false;
	for(int i = 0; i < 4; i++)
	{
		int diff = k - s[i];
		for(int j = 0; j < 4; j++)
		{
			if(diff == s[j]){
				answer = true;
				break;
			}
		}

		if(answer)
			break;
	}

	return answer;
}

int main(void)
{
	int s[4] = {12, 15, 15, 7};
	int k = 17;
	bool result = addUp(s, k);
	cout << result << endl;
	return 0;
}