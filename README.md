# 題目2. 英哩轉公里
### 問題描述：
試撰寫一程式，可由鍵盤輸入英哩，程式的輸出為公里，其轉換公式如下：
1 英哩= 1.6 公里

### 輸入說明：
輸入欲轉換之英哩數(int)。

### 輸出說明：
輸出公里(double)，取到小數點以下第一位。

### 範例：

輸入：90
輸出：144.0

### 解答：
```
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
	//將輸出結果的小數部分透過setprecision()函數取至小數一位，且不讓其四捨五入加上fixed
	cout << fixed << setprecision(1) << kilometer << endl;
	return 0;
}
```
