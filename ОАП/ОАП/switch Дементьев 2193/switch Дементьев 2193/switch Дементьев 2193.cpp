#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int operation;
	//int a, b;
	//cout << "ПРОСТЕЙШИЙ КАЛЬКУЛЯТОР\n";
	//cout << "Сначала введите операцию (+ - * /)\nПосле 2 числа" << endl;
	cout << "Операция: "; cin >> operation;
	//cout << "Два числа:\n"; cin >> a; cin >> b; 
	switch (operation)
	{
	case 7:
		cout << "???????";
		break;
	case 9:
		cout << "ррррррррр";
		break;
	case 0:
		break;
	default:
		cout << "Неверный ввод данных";
		break;
	}
}
