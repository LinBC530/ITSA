#include <iostream>
using namespace std;

class Card
{
private:
	char type = NULL;
	int num = NULL;
public:
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
};
void quick_sort(Card)
{

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
		}
	}
	
}