#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a = "!@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\:\"\"asdfghjkl;''<>??zxcvbnm,.//  ",input;
	getline(cin, input);
	for (int i = 0; i < input.length(); i++)
	{
		input[i] = tolower(input[i]);
		for (int j = 0; j < a.length(); j++)
		{
			if (input[i] == a[j])
			{
				cout << a[j + 1];
				break;
			}
		}
	}
	cout << endl;
	return 0;
}