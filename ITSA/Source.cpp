#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, y;
	double distance;
	cin >> x >> y;
	//�p��P�����I���Z���æs�J distance (sqrt()���}�ڸ�����ơApow()�����誺���)
	distance = sqrt(pow(x, 2) + pow(y, 2));
	//�� distance ��b�|��(�t����)��X inside �A�_�h��X outside
	if (distance <= 100)
		cout << "inside" << endl;
	else
		cout << "outside" << endl;
	return 0;
}