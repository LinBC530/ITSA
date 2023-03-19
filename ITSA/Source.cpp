#include <iostream>
using namespace std;

int RC(int n)
{
	if (n > 1)
	{
		return RC(n - 1) + RC(n / 2);
	}
	else if (n == 0 or n == 1)
	{
		return n + 1;
	}
}

int main()
{
	int n;
	cin >> n;
	cout << RC(n) << endl;
	return 0;
}