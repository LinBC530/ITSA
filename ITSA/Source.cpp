#include <iostream>
using namespace std;

int main()
{
	int i;
	cin >> i;
	//判斷 i(月份) 的數值並區分月份，輸出對應季節
	if (i >= 3 and i <= 5)
		cout << "Spring" << endl;
	else if (i >= 6 and i <= 8)
		cout << "Summer" << endl;
	else if (i >= 9 and i <= 11)
		cout << "Autumn" << endl;
	else if (i=12 and i <= 2 and i>0)
		cout << "Winter" << endl;
	return 0;
}