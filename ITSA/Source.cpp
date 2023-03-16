#include <iostream>
using namespace std;

int main()
{
	int input;
	cin >> input;
    if (input <= 1) {
        cout << "NO" << endl;
    }
    for (int i = 2; i * i <= input; i++) {
        if (input % i == 0) {
            cout << "NO" << endl;
        }
    }
    cout << "YES" << endl;
	return 0;
}