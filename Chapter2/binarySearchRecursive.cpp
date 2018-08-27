#include<iostream>
using namespace std;

int location(int low, int high, int key, int* s)
{
	int mid;

	if(low > high)
		return 0;
	else
	{
		mid = (low + high)/2;
		if(key == s[mid])
			return mid;
		else if(key < s[mid])
			return location(low, mid - 1, key, s);
		else
			return location(mid + 1, high, key, s);
	}
}

int main(void)
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int low = 0;
	int high = 9;
	int key = 8;
	cout << "location of key " << key << " is at index: " << location(low, high, key, a);
}