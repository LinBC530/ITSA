#include <iostream>
using namespace std;

//�ʺA�t�m�O����
int** Matrix(int n, int m)
{
	int** matrix = new int*[n];
	for (int i = 0; i < n; i++)
		matrix[i] = new int[m];
	return matrix;
}

//����O����Ŷ�
void Freed(int** &matrix,int n)
{
	for(int i=0;i<n;i++)
	{
		delete[] matrix[i];
		i++;
	}
	delete[] matrix;
}


//����x�}
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

//��J�x�}���e
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

//��X�x�}���e
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

	//�ϥΰʺA�t�m�O����A�إߦs��x�}���e���G���}�C
	int** data = Matrix(n, m);
	int** ans = Matrix(m, n);

	//��J�x�}���e�s�Jdata
	Input(data,n,m);

	//����data���x�}���e�s�Jans
	Reverse(data, ans,n,m);

	//��X�����x�}ans
	Output(ans,m,n);

	//����data��ans�G���}�C�O����Ŷ�
	Freed(data,n);
	Freed(ans,m);
	return 0;
}