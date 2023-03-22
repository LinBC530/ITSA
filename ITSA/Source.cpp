#include <iostream>
#include <map>
using namespace std;

//�w�qCard����
class Card
{
private:
	char type = NULL;
	int num = NULL;
public:
	char getType() { return type; }
	int getNum() { return num; }
	//�s�J���
	void setCard(char type, int num)
	{
		this->type = type;
		this->num = num;
	}
	//�P�_�O�_�����
	bool hasdata()
	{
		return type != NULL && num != NULL;
	}
	//���� < �B��l�A�H�P�_Card�O�_�p��t�@Card
	bool operator< (Card &card)
	{
		map<char, int> icon{ {'S',4},{'H',3} ,{'D',2} ,{'C',1} };
		if (type == card.getType())
			return num < card.getNum();
		return icon[type] < icon[card.type];
	}
	//���� > �B��l�A�H�P�_Card�O�_�j��t�@Card
	bool operator> (Card &card)
	{
		map<char, int> icon{ {'S',4},{'H',3} ,{'D',2} ,{'C',1} };
		if (type == card.getType())
			return num > card.getNum();
		return icon[type] > icon[card.type];
	}
};
//�ϥΧֳt�ƧǪk�ӱƧǸӦC��Card����
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
//���� << �B��l�A�Ω�²�Ƽ��g��XCard�����ƪ��{���X
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
			//�p�G������ϥΪ̫��UEnter��A�N���ƧǸӦCCard�A�b�~���J�U�@�CCard
			if (cin.get() == '\n')
			{ 
				quick_sort(card[i], 0, j);
				break; 
			}
		}
	}
	//��X�Ƨǧ���Card�G�L�}�C�A�L��ƪ�����X�A������O����Ŷ�
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