# 題目13. 撲克牌大小
### 問題描述：
撲克牌的遊戲有很多種，像是大老二、撿紅點等。然而，現在您要參與的是比大小遊戲，每張牌各有其花色和數字，大小比較主要以花色為主，黑桃 > 紅心 > 方塊 > 梅花；倘若花色相同時，則比較數字。

### 輸入說明：
第一列的整數，代表撲克牌的疊數，其後有若干列，每列即為一疊牌的內容，每張牌分別以英文、數字作表示，其中 S 代表黑桃、 H 代表紅心、 D 代表方塊、 C 代表梅花。每筆資料分別以空白隔開。

### 輸出說明：
印出排列過後的撲克牌。一行是一 疊 牌， 每張牌以空白隔開。

### 範例：

![](https://i.imgur.com/Rr7WunO.png)

### 作法(非解答)：
```cpp
#include <iostream>
#include <string>
#include <map>
using namespace std;

class Card
{
private:
	char type = NULL;
	int num = NULL;
public:
	char getType() { return type; }
	int getNum() { return num; }
	void setCard(char type = ' ', int num = 0)
	{
		this->type = type;
		this->num = num;
	}
	bool hasdata()
	{
		return type != NULL && num != NULL;
	}
	bool operator< (Card &card)
	{
		map<char, int> icon{ {'S',4},{'H',3} ,{'D',2} ,{'C',1} };
		if (type == card.getType())
			return num < card.getNum();
		return icon[type] < icon[card.type];
	}
	bool operator> (Card &card)
	{
		map<char, int> icon{ {'S',4},{'H',3} ,{'D',2} ,{'C',1} };
		if (type == card.getType())
			return num > card.getNum();
		return icon[type] > icon[card.type];
	}
};
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
			if (cin.get() == '\n')
			{ 
				quick_sort(card[i], 0, j);
				break; 
			}
		}
	}
	for(int i=0;i<n;i++)
		for (int j = 0; j < 52; j++)
		{
			if (card[i][j+1].hasdata())
				cout << card[i][j] << " ";
			else
			{
				if(i==n-1){ cout << card[i][j]; delete[] card[i]; break;}
				cout << card[i][j] << endl;
				delete[] card[i];
				break;
			}
		}
	delete[] card;
}
```
