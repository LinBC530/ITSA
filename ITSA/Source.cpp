#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin >> a;
	//輸入數值a，並做等差數列運算，算出1到a中3的倍數總和。
	b = a % 3;
	c = a - b;
	d = (c - 3) / 3 + 1;
	e = d * (c + 3) / 2;
	cout << e << '\n';
	return 0;
}