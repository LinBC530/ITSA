#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
	string str;
	list<string> data;
	while (cin >> str)
	{
		for (int i = 0; i < str.length(); i++)
		{
			if ((int)str[i] >= 65 and (int)str[i] <= 90)
				str[i] = (int)str[i] + 32;
		}
		if (data.empty()){}
		else
		{
			for (string i : data)
			{
				if (str == i)
					goto check_enter;
			}
		}
		data.push_back(str);
	check_enter:
		if (getchar() == '\n')
			break;
	}
	for (string i : data)
	{
		if(i != data.back())
			cout << i << " ";
		else
			cout << i << endl;
	}
	return 0;
}