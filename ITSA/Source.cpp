#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a, a1;
    string str;
    while (getline(cin, str))
        //輸入一組數字，並將輸入直設為a，判斷數值是否為迴文。
    {
        a1 = 1;
        a = str.length();
        for (int i = 0; i < a / 2; i++)
        {
            if (str[i] != str[a - i - 1])
            {
                a1 = 0;
                break;
            }
        }
        if (a1 == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}