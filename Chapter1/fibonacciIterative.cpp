#include<iostream>
using namespace std;

unsigned long long int fibonacci(int n)
{
	int f1 = 0;
	int f2 = 1;
	unsigned long long int f3;

	if(n == 1)
		return f1;
	else if(n == 2)
		return f2;
	else
	{
		for(int i = 2; i < n; i++)
		{
			f3 = f2 + f1;
			f1 = f2;
			f2 = f3;
		}
	}

	return f3;
}

int main(void)
{
	int n = 2000;
	cout<< "The " << n << "th fibonacci number is "<< fibonacci(n);
	return 0;
}