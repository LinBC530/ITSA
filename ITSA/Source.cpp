#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int miles;
	double kilometer;
	cin >> miles;
	kilometer = (double) miles * 1.6;
	cout << fixed << setprecision(1) << kilometer << endl;
	return 0;
}