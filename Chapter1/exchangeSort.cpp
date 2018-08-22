#include<iostream>
using namespace std;

int* exchangeSort(int* array, int n)
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = i+1; j < n; j++)
		{
			if(array[i] > array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	return array;
}

int main(void)
{
	int array[10] = {10, 7, 8, 3, 5, 9, 6, 2, 1, 4};
	int* newArray = exchangeSort(array, 10);
	int i = 0;
	while(i < 10)
	{
		cout << newArray[i] << endl;
		i++;
	}
	return 0;
}