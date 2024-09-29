#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x, y, a, b;
	cout << "Введите координаты точки: ";
	cin >> x >> y;
	if (x > -0.5 && x*x + y * y > 1) cout << "Точка принадлежит\n";
	else if (x < -0.5 || x*x + y * y < 1) cout << "Точка не принадлежит\n";
	else cout << "Точка лежит на границе\n";
	scanf_s("%lf %lf", &a, &b);
	printf("%5.5lf %5.5lf\n", a, b);
	if (a > 4 || b > 4) 
	{
		y = a + b;
		printf("%5.5lf\n", y);
	}
	else if (a == 4 || b == 4)
	{
		y = a - b;
		printf("%5.5lf\n", y);
	}
	else
	{
		y = a * b;
		printf("%5.5lf\n", y);
	}
	return 0;
}