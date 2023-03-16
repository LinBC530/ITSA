#include <iostream>
using namespace std;

class Complex{
private:
	int a=0, b=0;
public:
	Complex(){};
	Complex(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	Complex operator+ (Complex const& c)
	{
		Complex ans(a + c.a, b + c.b);
		return ans;
	}
	Complex operator- (Complex const& c)
	{
		Complex ans(a - c.a, b - c.b);
		return ans;
	}
	Complex operator* (Complex const& c)
	{
		Complex ans(a * c.a - b * c.b, a * c.b + c.a * b);
		return ans;
	}
	void show()
	{
		cout << a << " " << b << endl;
	}
};

int main()
{
	int n, a1, b1,a2,b2;
	char oper;
	cin >> n;
	Complex data[10];
	for (int i = 0; i < n; i++)
	{
		cin >> oper >> a1 >> b1 >> a2 >> b2;
		Complex c1(a1, b1), c2(a2, b2);
		switch (oper)
		{
		case '+':
			data[i] = c1 + c2;
			break;
		case '-':
			data[i] = c1 - c2;
			break;
		case '*':
			data[i] = c1 * c2;
			break;
		}
	}
	for (int i = 0; i < n; i++)
		data[i].show();
	return 0;
}