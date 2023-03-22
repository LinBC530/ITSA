#include <iostream>
using namespace std;
bool isPrime(int p) {
    if (p <= 1) return false;
    for (int i = 2; i < p; i++) {
        if (p % i == 0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}