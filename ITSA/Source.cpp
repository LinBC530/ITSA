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
		if (type != NULL && num != NULL)
			return true;
		else
			return false;
	}
	bool operator< (Card &card)
	{
		map<char, int> icon{ {'S',4},{'H',3} ,{'D',2} ,{'C',1} };
		if (type == card.getType())
		{
			if (num < card.getNum())
				return true;
			return false;
		}
		else
		{
			if (icon[type] < icon[card.type])
				return true;
			return false;
		}
	}
	bool operator> (Card &card)
	{
		map<char, int> icon{ {'S',4},{'H',3} ,{'D',2} ,{'C',1} };
		if (type == card.getType())
		{
			if (num > card.getNum())
				return true;
			return false;
		}
		else
		{
			if (icon[type] > icon[card.type])
				return true;
			return false;
		}
	}
	bool operator<= (Card& card)
	{
		map<char, int> icon{ {'S',4},{'H',3} ,{'D',2} ,{'C',1} };
		if (type == card.getType())
		{
			if (num <= card.getNum())
				return true;
			return false;
		}
		else
		{
			if (icon[type] <= icon[card.type])
				return true;
			return false;
		}
	}
};
void quick_sort(Card* &cards, int start ,int end)
{
	if (start >= end)
		return;
	int L = start;
	int R = end;
	Card key = cards[L], temp;
	while (L != R) {
		while ((cards[L] > key) && L < R)
			L++;
		while ((cards[R] <= key) && R > L)
			R--;
		if (L < R)
		{
			temp = cards[L];
			cards[L] = cards[R];
			cards[R] = temp;
		}
	}
	cards[start] = cards[L];
	cards[L] = key;
	quick_sort(cards, start, R - 1);
	quick_sort(cards, R + 1, end);
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
		card[i] = new Card[10];
		for (int j = 0; j < 10; j++)
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
		for (int j = 0; j < 10; j++)
		{
			if (card[i][j+1].hasdata())
				cout << card[i][j] << " ";
			else
				cout << card[i][j] << endl;
		}
}