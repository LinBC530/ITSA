# 題目3. 判斷座標是否在圓形的範圍內
### 問題描述：
有一圓形，直徑為200，且中心座標為(0,0)。請寫一支程式可以輸入「點」的座標，並判斷「點」是否在圓形的範圍內。如果「點」的位置剛好在邊界的話也算是在圓形範圍內(例：x=100，y=0)。
![](https://i.imgur.com/2AkwkTI.png)

### 輸入說明：
輸入一整數座標，依序分別X與Y。

### 輸出說明：
輸出此座標位置在圓內或圓外訊息。

### 範例：
|  輸入   |  輸出   |
|:-------:|:-------:|
|  50 50  | inside  |
| 200 200 | outside |


### 解答：
```
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, y;
	double distance;
	cin >> x >> y;
	//計算與中心點的距離並存入 distance (sqrt()為開根號的函數，pow()為平方的函數)
	distance = sqrt(pow(x, 2) + pow(y, 2));
	//當 distance 於半徑內(含等於)輸出 inside ，否則輸出 outside
	if (distance <= 100)
		cout << "inside" << endl;
	else
		cout << "outside" << endl;
	return 0;
}
```
