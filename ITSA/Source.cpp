#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	int input;
	cin >> input;
	//將input轉成2進位至bit
	bitset<8> bit(input);
	cout << bit << endl;
	return 0;
}