#include<iostream>
using namespace std;

unsigned long long int fib(int n)
{
	if(n <= 1)
		return n;
	else
		return fib(n-1) + fib(n-2);
}

int main(void)
{
	int n = 40;
	cout << "The " <<n<<"th term of fibonacci sequence is "<<fib(40);
}