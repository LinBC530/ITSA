#include <iostream>
using namespace std;

int main()
{
	int hour[2], minute[2], total;
	cin >> hour[0] >> minute[0];
	cin >> hour[1] >> minute[1];
	//計算出總共停多少分鐘
	total = (hour[1] - hour[0]) * 60 + minute[1] - minute[0];
	//判斷分別停多久，分成三個區段，分別為120分鐘內(含120分鐘、120分鐘以上240分鐘以下、240分鐘以上(含240分鐘)
	if (total <= 120)
		cout << (int)(total/30)*30 << endl;
	else if (total > 120 and total < 240)
		cout << (int)((total - 120) / 30) * 40 + 120 << endl;
	else if (total >= 240)
		cout << (int)((total - 240) / 30) * 60 + 280 << endl;
	return 0;
}