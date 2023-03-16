#include <iostream>
using namespace std;

int main()
{
	int sum = 0,input;
	cin >> input;
	for (int num = 3; num <= input; num++)
	{
		if (num % 3 == 0)
		{
			sum += num;
		}
	}
	cout << sum << endl;
	return 0;
}