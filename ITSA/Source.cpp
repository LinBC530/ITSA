#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int miles;
	double kilometer;
	cin >> miles;
	//�N miles �����নdouble�A���H1.6�A�A�s�J kilometer
	kilometer = (double) miles * 1.6;
	//�N��X���G���p�Ƴ����z�Lsetprecision()��ƨ��ܤp�Ƥ@��A�B������|�ˤ��J�e�����[�Wfixed
	cout << fixed << setprecision(1) << kilometer << endl;
	return 0;
}