# 題目5. 十進制轉二進制
### 問題描述：
試撰寫一程式，可輸入月份，然後判斷其所屬的季節（ 3~5 月為春季，6~8 月為夏季， 9~11 月為秋季， 12~2 月為冬季）。

### 輸入說明：
輸入月份。

### 輸出說明：
輸出該月份的季節， 3~5 月為春季(Spring)， 6~8 月為夏季(Summer)， 9~11 月為秋季(Autumn)， 12~2 月為冬季(Winter)。

### 範例：
輸入：
3

輸出：
Spring

### 解答：
```
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
```
