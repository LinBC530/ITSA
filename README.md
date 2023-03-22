# 題目14. 判斷是否為迴文

### 問題描述：
迴文是指從前面讀和從後面讀都相同的一個數字或一段文字。例如下列每一五位數的整數都是迴文： 123321 ， 55555 ， 45554 ， 11611 。請撰寫一個程式，判斷它是否迴文。

### 輸入說明：
輸入一個正整數。

### 輸出說明：
迴文印出 ” 是 ” ；非回文印出 ” 否 ” 。

### 範例：
Sample Input:
123321
1556551 
1244221 
-------------------------
Sample Output:
YES
YES
NO

### 解答：
```
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a, a1;
    string str;
    while (getline(cin, str))
    //輸入一組數字，並將輸入直設為a，判斷數值是否為迴文。
    {
        a1 = 1;
        a = str.length();
        for (int i = 0; i < a / 2; i++)
        {
            if (str[i] != str[a - i - 1])
            {
                a1 = 0;
                break;
            }
        }
        if (a1 == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
```
