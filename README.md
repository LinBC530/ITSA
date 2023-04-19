# 題目16. 子字串出現次數
### 問題描述：
給予兩個英文字串，請計算出第一個字串出現在第二個字串中的次數。

### 輸入說明：
輸入分為兩行，第一行是由英文大小寫字母與數字所組成的字串，長度不超過 128 個字母。

第二行也是由英文大小寫字母與數字所組成的字串，長度不超過 512 個字母。

### 輸出說明：
第一個字串出現在第二個字串中的次數。

### 範例：

![](https://i.imgur.com/ha4k23L.png)

### 解答：
```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool same = false;
	int num = 0;
	string str, data;
	cin >> str >> data;
	for (int i = 0; i < data.length() - str.length() + 1; i++)
	{
		if (data[i] == str[0])
		{
			same = true;
			for (int j = 0,k = i; j < str.length(); j++,k++)
			{
				if (data[k] != str[j])
				{
					same = false;
					break;
				}
			}
			if (same == true)
			{
				num++;
				same = false;
			}
		}
	}
	cout << num << endl;
	return 0;
}
```
