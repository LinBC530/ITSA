#include <iostream>
using namespace std;

int** Matrix(int n, int m)
{
	int** matrix = new int*[n];
	for (int i = 0; i < n; i++)
		matrix[i] = new int[m];
	return matrix;
}

void Freed(int** &matrix,int n)
{
	for(int i=0;i<n;i++)
	{
		delete[] matrix[i];
		i++;
	}
	delete[] matrix;
}

void Reverse(int** &matrix,int** &R_matrix,int n,int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			R_matrix[j][i] = matrix[i][j];
		}
	}
}

void Input(int** &matrix, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

void Output(int** &matrix, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j == m-1)
				cout << matrix[i][j] << endl;
			else
				cout << matrix[i][j] << " ";
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	int** data = Matrix(n, m);
	int** ans = Matrix(m, n);
	Input(data,n,m);
	Reverse(data, ans,n,m);
	Output(ans,m,n);
	Freed(data,n);
	Freed(ans,m);
	return 0;
}