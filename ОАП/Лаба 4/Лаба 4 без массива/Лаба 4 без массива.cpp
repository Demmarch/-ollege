#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	int dif;
	int cont = 0;
	bool exist_first_pos = false;
	printf("Вводите элементы: \n");
	for (int i = 0; i < 15; i++) {
		scanf_s("%i", &a);
		if (a < 0) {
			cont++;
		}
		if (a > 0 && exist_first_pos == false) {
			dif = a;
			exist_first_pos = true;
		}
		else if (a > 0 && exist_first_pos == true) {
			dif -= a;
		}
	}
	printf_s("Разность положительных элементов: %i \n", dif);
	printf_s("Количество отрицательных элементов: %i ", cont);
	return 0;
}
