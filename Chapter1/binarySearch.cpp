#include<iostream>
using namespace std;

int binarySearch(int n, int* s, int x)
{
	int low, high, mid;
	low = 0;
	high = n;
	int location = 0;

	while(low <= high && location == 0)
	{
		mid = (low + high)/2;
		cout << mid << endl;
		if(x == s[mid])
			location = mid;
		else if(x < s[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}

	return location;
}

int main(void)
{
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = 10;
	int x = 11;

	cout << "the element is at location: " << binarySearch(n, array, x);

	return 0;
}