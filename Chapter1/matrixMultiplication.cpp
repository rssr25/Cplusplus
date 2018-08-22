#include<iostream>
using namespace std;

int** matrixMultiplication(int** A, int** B, int n)
{
	int** C[3][3];

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			for(int k = 0; k < n; k++)
			{
				*(C[i] + j) = *(C[i] + j) + (*(A[i] + k)) * (*(B[k] + j));
			}
		}
	}

	return C;
}

int main(void)
{
	int** a;
	int** b;
	int A[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int B[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	a = A;
	b = B;
	int n = 3;
	int** C = matrixMultiplication(a, b, n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout<< C[i][j] << " " << endl;
		}

		cout << "\n";
	}
	return 0;
}