#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	int input;
	cin >> input;
	//�Ninput�ন2�i���bit
	bitset<8> bit(input);
	cout << bit << endl;
	return 0;
}