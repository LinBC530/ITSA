#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin >> a;
	//��J�ƭ�a�A�ð����t�ƦC�B��A��X1��a��3�������`�M�C
	b = a % 3;
	c = a - b;
	d = (c - 3) / 3 + 1;
	e = d * (c + 3) / 2;
	cout << e << '\n';
	return 0;
}