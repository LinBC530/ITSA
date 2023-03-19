#include <iostream>
using namespace std;

//動態配置記憶體
int** Matrix(int n, int m)
{
	int** matrix = new int*[n];
	for (int i = 0; i < n; i++)
		matrix[i] = new int[m];
	return matrix;
}

//釋放記憶體空間
void Freed(int** &matrix,int n)
{
	for(int i=0;i<n;i++)
	{
		delete[] matrix[i];
		i++;
	}
	delete[] matrix;
}


//反轉矩陣
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

//輸入矩陣內容
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

//輸出矩陣內容
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

	//使用動態配置記憶體，建立存放矩陣內容的二維陣列
	int** data = Matrix(n, m);
	int** ans = Matrix(m, n);

	//輸入矩陣內容存入data
	Input(data,n,m);

	//反轉data的矩陣內容存入ans
	Reverse(data, ans,n,m);

	//輸出反轉後矩陣ans
	Output(ans,m,n);

	//釋放data及ans二維陣列記憶體空間
	Freed(data,n);
	Freed(ans,m);
	return 0;
}