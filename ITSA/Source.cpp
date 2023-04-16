#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool same = false;
	int num = 0;
	string str, data;
	cin >> str >> data;
	for (int i = 0; i < data.length() - str.length() + 1; i++)
	{
		if (data[i] == str[0])
		{
			same = true;
			for (int j = 0,k = i; j < str.length(); j++,k++)
			{
				if (data[k] != str[j])
				{
					same = false;
					break;
				}
			}
			if (same == true)
			{
				num++;
				same = false;
			}
		}
	}
	cout << num << endl;
	return 0;
}