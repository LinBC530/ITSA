#include <iostream>
using namespace std;

int main()
{
	int hour[2], minute[2], total;
	cin >> hour[0] >> minute[0];
	cin >> hour[1] >> minute[1];
	//�p��X�`�@���h�֤���
	total = (hour[1] - hour[0]) * 60 + minute[1] - minute[0];
	//�P�_���O���h�[�A�����T�ӰϬq�A���O��120������(�t120�����B120�����H�W240�����H�U�B240�����H�W(�t240����)
	if (total <= 120)
		cout << (int)(total/30)*30 << endl;
	else if (total > 120 and total < 240)
		cout << (int)((total - 120) / 30) * 40 + 120 << endl;
	else if (total >= 240)
		cout << (int)((total - 240) / 30) * 60 + 280 << endl;
	return 0;
}