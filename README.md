# 題目4. 停車費計算
### 問題描述：
假設某個停車場的費率是停車2小時以內，每半小時30元，超過2小時，但未滿4小時的部份，每半小時40元，超過4小時以上的部份，每半小時60元，未滿半小時部分不計費。如果您從早上10點23分停到下午3點20分，請撰寫程式計算共需繳交的停車費。

### 輸入說明：
輸入兩組時間，分別為開始與離開時間，24小時制。

### 輸出說明：
輸出停車費。

### 範例：
輸入：
10 23
15 20

輸出：
340

### 解答：
```
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
```
