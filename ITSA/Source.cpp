#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int miles;
	double kilometer;
	cin >> miles;
	//將 miles 的值轉成double再乘以1.6，再存入 kilometer
	kilometer = (double) miles * 1.6;
	//將輸出結果的小數部分透過setprecision()函數取至小數一位，且不讓其四捨五入前面先加上fixed
	cout << fixed << setprecision(1) << kilometer << endl;
	return 0;
}