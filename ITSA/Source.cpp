#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin >> a;
	//块计a暗单畉计笲衡衡1aい3计羆㎝
	b = a % 3;
	c = a - b;
	d = (c - 3) / 3 + 1;
	e = d * (c + 3) / 2;
	cout << e << '\n';
	return 0;
}