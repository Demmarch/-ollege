#include <iostream>

using namespace std;

template<typename T>

T func(T *arr) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[j] > arr[j + 1]) {
				int b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
	cout << "Массив отсортирован - " << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int irr[5];

	cout << "Введите 5 чисел массива" << endl;

	for (int i = 0; i < 5; i++) {
		cin >> irr[i];
	}
	func(irr);
	return 0;
}
