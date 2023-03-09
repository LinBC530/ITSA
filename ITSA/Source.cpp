#include <iostream>
using namespace std;

int main()
{
	int hour[2], minute[2], total;
	cin >> hour[0] >> minute[0];
	cin >> hour[1] >> minute[1];
	total = (hour[1] - hour[0]) * 60 + minute[1] - minute[0];
	if (total <= 120)
		cout << total/30*30 << endl;
	else if (total > 120 and total <= 240)
		cout << (total - 120) / 30 * 40 + 120 << endl;
	else if (total > 240)
		cout << (total - 240) / 30 * 60 + 280 << endl;
	return 0;
}