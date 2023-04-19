# 題目15. 文字及字母出現次數
### 問題描述：
在電腦科學上 ，計算一串文字上各個字母出現的頻率是常被用到的技術，這對壓縮來講是很重要的資訊，而計算字數也可以幫助人們作校正的工具。一行文字被空白、逗點或是句點所分隔而形成很多字，例如 ”I have a pencil.” 這行字就有 I ， have ， a ， pencil 這四個字，即此行字數為 4 。所以現在要請你幫忙設計一個程式來計算一行文字的字 數及各個字母出現的次數。

### 輸入說明：
輸入一行正常的英文文字，也就是不要有開頭是空白或是有連續兩個 空白的情形發生，並且內容只能包含英文字母、空白、逗點、句點。 注意 : 輸入的字串長度最多是 100 。

### 輸出說明：
第一行輸出一個正整數 n ，表示此行文字的字數。 第二行開始依序輸出在此行文字中有出現的字母及出現的次數。 注意 : 大小寫不分，輸出小寫字母。

### 範例：

![](https://i.imgur.com/gKweSa2.png)

### 解答：
```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int num=1,ans[26][2]{0};
	for (int i = 0, add = 97; i < 26; i++, add++)
		ans[i][0] = add;
	for (int i = 0; i < str.length(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (str[i] == ' ')
			{
				num++;
				break;
			}
			else if(str[i] == ',' || str[i] == '.')
				break;
			else if (str[i] == (char)ans[j][0] || str[i] == (char)(ans[j][0] - 32))
			{
				ans[j][1]++;
			}
		}
	}
	cout << num << endl;
	for (int i = 0; i < 26; i++)
	{
		if (ans[i][1] == 0)
			continue;
		else
			cout << (char)ans[i][0] << " : " << ans[i][1] << endl;
	}
	return 0;
}
```
