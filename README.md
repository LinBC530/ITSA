# 題目5. 十進制轉二進制
### 問題描述：
撰寫一個程式，使用者輸入一個整數，印出8位元的二進制表示。

### 輸入說明：
輸入一個整數，介於-128～127之間。

### 輸出說明：
以8位元的二進制顯示。

### 範例：
輸入：
-2

輸出：
11111110

### 解答：
```
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	int input;
	cin >> input;
	//將input轉成2進位至bit
	bitset<8> bit(input);
	cout << bit << endl;
	return 0;
}
```
