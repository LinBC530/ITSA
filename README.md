# 題目12. 遞迴程式練習
### 問題描述：
給定下列遞迴函式 :

![](https://i.imgur.com/YZVEfp3.png)

請計算出 f (k) 。

### 輸入說明：
輸入值為一個大於 1 的整數。

### 輸出說明：
f(k) 的計算結果。

### 範例：

![](https://i.imgur.com/wI4ZPH5.png)

### 解答：
```cpp
#include <iostream>
using namespace std;

int RC(int n)
{
	if (n > 1)
	{
		return RC(n - 1) + RC(n / 2);
	}
	else if (n == 0 or n == 1)
	{
		return n + 1;
	}
}

int main()
{
	int n;
	cin >> n;
	cout << RC(n) << endl;
	return 0;
}
```
