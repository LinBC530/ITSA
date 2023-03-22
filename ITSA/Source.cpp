#include <iostream>
#include <string>
using namespace std;

int main()
{
	string data;
	cin >> data;
	int size = data.length(),L,R;
	L = (size/2)-1;
	R = size / 2;
	if (data.length() % 2 != 0) { R++; }
	for (int i = L; i >= 0; i--)
		if ((data.at(i) == data.at(R++)) == 0)
		{
			cout << "NO" << endl;
			exit(0);
		}
	cout << "YES" << endl;
	return 0;
}