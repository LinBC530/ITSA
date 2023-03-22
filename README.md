# 題目13. 撲克牌大小
### 問題描述：
撲克牌的遊戲有很多種，像是大老二、撿紅點等。然而，現在您要參與的是比大小遊戲，每張牌各有其花色和數字，大小比較主要以花色為主，黑桃 > 紅心 > 方塊 > 梅花；倘若花色相同時，則比較數字。

### 輸入說明：
第一列的整數，代表撲克牌的疊數，其後有若干列，每列即為一疊牌的內容，每張牌分別以英文、數字作表示，其中 S 代表黑桃、 H 代表紅心、 D 代表方塊、 C 代表梅花。每筆資料分別以空白隔開。

### 輸出說明：
印出排列過後的撲克牌。一行是一 疊 牌， 每張牌以空白隔開。

### 範例：

![](https://i.imgur.com/Rr7WunO.png)

### 作法(輸出正常，但無法通過ITSA測試)：
```cpp
#include <iostream>
#include <map>
using namespace std;

//定義Card物件
class Card
{
private:
	char type = NULL;
	int num = NULL;
public:
	char getType() { return type; }
	int getNum() { return num; }
	//存入資料
	void setCard(char type, int num)
	{
		this->type = type;
		this->num = num;
	}
	//判斷是否有資料
	bool hasdata()
	{
		return type != NULL && num != NULL;
	}
	//重載 < 運算子，以判斷Card是否小於另一Card
	bool operator< (Card &card)
	{
		map<char, int> icon{ {'S',4},{'H',3} ,{'D',2} ,{'C',1} };
		if (type == card.getType())
			return num < card.getNum();
		return icon[type] < icon[card.type];
	}
	//重載 > 運算子，以判斷Card是否大於另一Card
	bool operator> (Card &card)
	{
		map<char, int> icon{ {'S',4},{'H',3} ,{'D',2} ,{'C',1} };
		if (type == card.getType())
			return num > card.getNum();
		return icon[type] > icon[card.type];
	}
};
//使用快速排序法來排序該列的Card物件
void quick_sort(Card* cards, int left, int right)
{
	if (left >= right)
		return;

	int i = left - 1, j = right + 1;
	Card pivot = cards[(left + right) / 2];

	while (i < j)
	{
		do i++; while (cards[i] > pivot);
		do j--; while (cards[j] < pivot);
		if (i < j) swap(cards[i], cards[j]);
	}

	quick_sort(cards, left, j);
	quick_sort(cards, j + 1, right);
}
//重載 << 運算子，用於簡化撰寫輸出Card物件資料的程式碼
ostream& operator<< (ostream& output, Card& card)
{
	output << card.getType() << card.getNum();
	return output;
}
int main()
{
	int n, num;
	char type;
	cin >> n;
	Card** card = new Card * [n];
	for (int i = 0; i < n; i++)
	{
		card[i] = new Card[52];
		for (int j = 0; j < 52; j++)
		{
			cin >> type >> num;
			card[i][j].setCard(type, num);
			//如果偵測到使用者按下Enter鍵，就先排序該列Card，在繼續輸入下一列Card
			if (cin.get() == '\n')
			{ 
				quick_sort(card[i], 0, j);
				break; 
			}
		}
	}
	//輸出排序完的Card二微陣列，無資料的不輸出，並釋放記憶體空間
	for(int i=0;i<n;i++)
		for (int j = 0; j < 52; j++)
		{
			if (card[i][j+1].hasdata())
				cout << card[i][j] << " ";
			else
			{
				cout << card[i][j] << endl;
				delete[] card[i];
				break;
			}
		}
	delete[] card;
}
```
