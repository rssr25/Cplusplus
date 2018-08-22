#include<iostream>
using namespace std;

int addArrayNumbers(int* array)
{
	int sum = 0;

	for(int i = 0; i < 10; i++)
	{
		sum = sum + array[i];
	}

	return sum;
}

int main(void)
{
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << "The sum is: " << addArrayNumbers(array) <<endl;
	return 0;
}