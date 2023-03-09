#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, y;
	double distance;
	cin >> x >> y;
	//計算與中心點的距離並存入 distance (sqrt()為開根號的函數，pow()為平方的函數)
	distance = sqrt(pow(x, 2) + pow(y, 2));
	//當 distance 於半徑內(含等於)輸出 inside ，否則輸出 outside
	if (distance <= 100)
		cout << "inside" << endl;
	else
		cout << "outside" << endl;
	return 0;
}