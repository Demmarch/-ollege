#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a[15];
	int dif;
	int cont = 0;
	bool exist_first_pos = false;
	printf("Вводите элементы массива \n");
	for (int i = 0; i < 15; i++) {
		scanf_s("%i", &a[i]);
		if (a[i] < 0) {
			cont++;
		}
		if (a[i] > 0 && exist_first_pos == false) {
			dif = a[i];
			exist_first_pos = true;
		}
		else if (a[i] > 0 && exist_first_pos == true) {
			dif -= a[i];
		}
	}
	printf_s("Разность положительных элементов массива: %i \n", dif);
	printf_s("Количество отрицательных элементов массива: %i ", cont);
	printf_s("Массив a {");
	for (int i = 0; i < 15; i++) {
		printf_s("%i ", a[i]);
	}
	printf_s("}");

	int min_el = a[0];
	int index_min = 0;
	int b;
	printf("\n Введите число: ");
	scanf_s("%i", &b);
	for (int i = 1; i < 15; i++) {
		if (a[i] < min_el) {
			min_el = a[i];
			index_min = i;
		}
	}
	a[index_min] = b;
	printf_s("Массив a {");
	for (int i = 0; i < 15; i++) {
		printf_s("%i ", a[i]);
	}
	printf_s("}");
	return 0;
}
