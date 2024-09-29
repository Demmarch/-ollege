#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x, eps;
	cout << "Введите значения аргумента и точности\n";
	cin >> x >> eps;
	double F = x, a = x;
	int n = 2;
	while (fabs(a) >= eps)
	{
		a *= x * x / (n*(n + 1));
		F += a;
		n += 2;
	}
	cout << "Приблизительтное значение sh(x) = " << F << endl;
	cout << "Точное значение sh(x) = " << sinh(x);
}
