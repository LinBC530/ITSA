#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b, c;
	while ( cin >> a >> b >> c ) {
	if ( a + b > c && b + c > a && c + a > b ) {
		cout << "fit" << endl;
	}else {
		cout << "unfit" << endl;
	}
	}
	return 0;
}
