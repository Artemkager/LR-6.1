#include <iostream>
#include <string>

using namespace std;

void max()
{
	double a, b, c;
	cout << "1-ое число - ";
	cin >> a;
	cout << "2-ое число - ";
	cin >> b;
	cout << "3-ее число - ";
	cin >> c;
	if (a > b && a > c)
	{
		cout << a << " - число a больше";
	}
	else if (b > a && b > c)
	{
		cout << b << " - число b больше";
	}
	else (c > a && c > b); {
		cout << c << " – максимальное число";
	}
}

int main()
{
	setlocale(LC_ALL, "RU");
	max();
	cout << endl;
	system("pause");
	return 0;
}
