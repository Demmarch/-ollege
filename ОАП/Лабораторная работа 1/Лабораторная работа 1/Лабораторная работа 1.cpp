#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double a, b, d;
	scanf_s("%lf %lf %lf", &a, &b, &d);
	printf("a = %5.5lf b = %5.5lf d = %5.5lf\n", a, b, d);
	cout << "Искомое значение: " << (2 * b*(log(a - b))) / pow(d, 2);
	return 0;
}