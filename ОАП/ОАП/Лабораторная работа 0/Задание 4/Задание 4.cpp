#include <iostream>

using namespace std;

int main() {

	setlocale(0, "ru");

	int x, y; cin >> x >> y;
	cout << "Сумма x+y = " << x + y << endl;
	cout << "Разность x-y = " << x - y << endl;
	cout << "Произведение x*y = " << x * y << endl;
	cout << "Отношение x/y=" << (double)x / y << endl;
	return 0;
}

