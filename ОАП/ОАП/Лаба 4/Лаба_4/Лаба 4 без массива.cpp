#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	int dif = 0;
	int cont = 0;
	bool exist_first_pos = false;
	printf("������� �������� ������� \n");
	for (int i = 0; i < 15; i++) {
		scanf_s("%i", &a);
		if (a < 0) {
			cont += 1;
		}
		if (a > 0 && exist_first_pos == false) {
			dif = a;
			exist_first_pos = true;
		}
		else if (a > 0 && exist_first_pos == true) {
			dif -= a;
		}
	}
	printf_s("�������� ������������� ��������� �������: %i \n", dif);
	printf_s("���������� ������������� ��������� �������: %i ", cont);
	return 0;
}