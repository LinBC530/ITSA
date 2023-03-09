#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, y;
	double distance;
	cin >> x >> y;
	distance = sqrt(pow(x, 2) + pow(y, 2));
	if (distance <= 100)
		cout << "inside" << endl;
	else
		cout << "outside" << endl;
	return 0;
}