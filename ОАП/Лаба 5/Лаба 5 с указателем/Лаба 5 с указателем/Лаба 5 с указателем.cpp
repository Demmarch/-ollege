#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	int matrix[3][3];
	int max_el;
	int min_el;
	int m_for_max = 0;
	int m_for_min = 0;
	bool first_element_is_exist = false;
	int zd_max = matrix[0][1];
	int zd_m = 3;
	int zd_n = 3;
	cout << "Введите элементы матрицы: " << endl;
	int n = sizeof(matrix) / sizeof(matrix[0]);
	int m = sizeof(matrix[0]) / sizeof(matrix[0][0]);
	int *end{ matrix[0] + n * m - 1 };
	int *ptr{ matrix[0] };	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
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
			if (i > j and zd_max < matrix[i][j]) {
				zd_max = matrix[i][j];
			}
		}
	}
	
	cout << "Массив до смены местами строк: " << endl;
	for (int i = 1; ptr <= end; ptr++, i++)
	{
		cout << *ptr << " ";
		if (i%m == 0)
		{
			cout << endl;
		}
	}
	cout << endl << zd_max << " - максимальный элемент под главной диагональю" << endl;
	cout << "Максимальный элемент и строка, где элемент находиться: " << max_el << " " << m_for_max << endl;
	cout << "Минимальный элемент и строка, где элемент находиться: " << min_el << " " << m_for_min << endl;
	int buffer;
	int* ptr_max = &matrix[m_for_max][0];
	int* ptr_min = &matrix[m_for_min][0];

	int *buffer_mas_min = new int[3];
	int *buffer_mas_max = new int[3];
	for(int j = 0; j < 3; j++, ptr_min++, ptr_max++) {
		buffer_mas_min[j] = *ptr_min;
		buffer_mas_max[j] = *ptr_max;
	}
	ptr_max = &matrix[m_for_max][0];
	ptr_min = &matrix[m_for_min][0];
	for (int j = 0; j < 3; j++, ptr_max++, ptr_min++) {
		*ptr_max = buffer_mas_min[j];
		*ptr_min = buffer_mas_max[j];
	}
	cout << "Массив после смены местами строк: " << endl;
	ptr = &matrix[0][0];
	for (int i = 1; ptr <= end; ptr++, i++)
	{
		cout << *ptr << " ";
		if (i%m == 0)
		{
			cout << endl;
		}
	}
	delete[] buffer_mas_max;
	delete[] buffer_mas_min;
	//zadanie
	return 0;

}
