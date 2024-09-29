#include <iostream>

using namespace std;

int pross(int a, int b, int c) 
{
	return a + b + c;
}

int pross(int a, int b)
{
	return a - b;
}

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Сумма 3, 5 и 7 = " << pross(3, 5, 7) << endl << "Разность 7 и 4 = " << pross(7, 4);
	return 0;
}
