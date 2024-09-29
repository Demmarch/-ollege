#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	/*int matrix[3][3];
	int max_el;
	int min_el;
	int m_for_max = 0;
	int m_for_min = 0;
	bool first_element_is_exist = false;
	cout << "Введите элементы матрицы: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (first_element_is_exist == false) {
				cin >> matrix[i][j];
				max_el = matrix[i][j];
				min_el = matrix[i][j];
				first_element_is_exist = true;
			}
			else {
				cin >> matrix[i][j];
				if (matrix[i][j] > max_el) {
					max_el = matrix[i][j];
					m_for_max = i;
				}
				if (matrix[i][j] < min_el) {
					min_el = matrix[i][j];
					m_for_min = j;
				}
			}
		}
	}
	cout << "Массив до смены местами строк: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Максимальный элемент и строка, где элемент находиться: " << max_el << " " << m_for_max << endl;
	cout << "Минимальный элемент и строка, где элемент находиться: " << min_el << " " << m_for_min << endl;
	int buffer;
	for (int j = 0; j < 3; j++) {
		buffer = matrix[m_for_max][j];
		matrix[m_for_max][j] = matrix[m_for_min][j];
		matrix[m_for_min][j] = buffer;
	}
	cout << "Массив после смены местами строк: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}*/
	int b[2] = {1, 2};
	int*  b_ptr;

	for (b_ptr = &b[0]; b_ptr < &b[1]; b_ptr++) {
		
			cout << *b_ptr << " ";
			
	}

}
