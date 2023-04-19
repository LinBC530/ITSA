# 題目17. 英文斷詞
### 問題描述：
斷詞在自然語言的研究上是個很重要的步驟，主要就是將關鍵字從句子中斷出，英文的斷詞較為簡單，就根據句子中的空格將英文字隔開。

### 輸入說明：
輸入一句英文敘述句。 字元數≤1000。

### 輸出說明：
將輸入的句子進行斷詞，將斷出的關鍵字依照句子中的出現排序列印出。全部轉成小寫，列印出的關鍵字不得重複，關鍵字間以一個空格隔開，最後一個關鍵字後面進行換行。例如輸入 How do you do ，則輸出 how do you 。

### 範例：

![](https://i.imgur.com/BlBbuNt.png)

### 解答：
```cpp
#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
	string str;
	list<string> data;
	while (cin >> str)
	{
		for (int i = 0; i < str.length(); i++)
		{
			if ((int)str[i] >= 65 and (int)str[i] <= 90)
				str[i] = (int)str[i] + 32;
		}
		if (data.empty()){}
		else
		{
			for (string i : data)
			{
				if (str == i)
					goto check_enter;
			}
		}
		data.push_back(str);
	check_enter:
		if (getchar() == '\n')
			break;
	}
	for (string i : data)
	{
		if(i != data.back())
			cout << i << " ";
		else
			cout << i << endl;
	}
	return 0;
}
```
