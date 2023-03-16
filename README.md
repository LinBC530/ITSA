# 題目7. 複數運算
### 問題描述：
在做傅立葉轉換時，常會用到複數，但每次都要分開來計算實部與虛部，非常的麻煩，現在透過operator overloading的方式來簡化程式設計師的負擔。須做加減乘。

### 輸入說明：
第一列輸入一個正整數n。其後有n列，每一列代表一個想要做運算的虛數，每一列之資料依序為運算元、虛數1、虛數2。虛數的格式為a b。

### 輸出說明：
每一列表一個運算結果。虛數的格式為a b。

### 範例：
輸入：
![](https://i.imgur.com/mJOK4rn.png)

輸出：
![](https://i.imgur.com/GMsdU5n.png)

### 解答：
```cpp=
#include <iostream>
using namespace std;

class Complex{
private:
	int a=0, b=0;
public:
	Complex(){};
	Complex(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	Complex operator+ (Complex const& c)
	{
		Complex ans(a + c.a, b + c.b);
		return ans;
	}
	Complex operator- (Complex const& c)
	{
		Complex ans(a - c.a, b - c.b);
		return ans;
	}
	Complex operator* (Complex const& c)
	{
		Complex ans(a * c.a - b * c.b, a * c.b + c.a * b);
		return ans;
	}
	void show()
	{
		cout << a << " " << b << endl;
	}
};

int main()
{
	int n, a1, b1,a2,b2;
	char oper;
	cin >> n;
	Complex data[10];
	for (int i = 0; i < n; i++)
	{
		cin >> oper >> a1 >> b1 >> a2 >> b2;
		Complex c1(a1, b1), c2(a2, b2);
		switch (oper)
		{
		case '+':
			data[i] = c1 + c2;
			break;
		case '-':
			data[i] = c1 - c2;
			break;
		case '*':
			data[i] = c1 * c2;
			break;
		}
	}
	for (int i = 0; i < n; i++)
		data[i].show();
	return 0;
}
```
