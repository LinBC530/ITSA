#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int num=1,ans[26][2]{0};
	for (int i = 0, add = 97; i < 26; i++, add++)
		ans[i][0] = add;
	for (int i = 0; i < str.length(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (str[i] == ' ')
			{
				num++;
				break;
			}
			else if(str[i] == ',' || str[i] == '.')
				break;
			else if (str[i] == (char)ans[j][0] || str[i] == (char)(ans[j][0] - 32))
			{
				ans[j][1]++;
			}
		}
	}
	cout << num << endl;
	for (int i = 0; i < 26; i++)
	{
		if (ans[i][1] == 0)
			continue;
		else
			cout << (char)ans[i][0] << " : " << ans[i][1] << endl;
	}
	return 0;
}