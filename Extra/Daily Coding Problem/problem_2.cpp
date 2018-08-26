/*

Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

Follow-up: what if you can't use division?

*/

#include<iostream>
using namespace std;

int* productAllExceptAti(int* s)
{
	static int resultArray[5];
	for(int i = 0; i < 3; i++)
	{
		int current = i;
		int multiply = 1;


		for(int j = 0; j < 3; j++)
		{
			if(j == current)
			{
				continue;
			}
			else
			{
				multiply *= s[j];
			}
		}

		//cout << multiply << endl;
		resultArray[i] = multiply;
	}

	return resultArray;
}

int main(void)
{
	int s[3] = {3, 2, 1};
	int* result = productAllExceptAti(s);

	for(int i = 0; i < 3; i++)
	{
		cout << result[i] << "\t" << endl;
	}

	return 0;
}